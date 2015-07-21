library(Rcpp)

cppFunction('int add(int x, int y, int z){
	int sum = x + y + z;
	return sum;
}')

?add
add(1, 2, 3)

one <- function() 1L

cppFunction('int one(){
	return 1;
}')

one()

signR <- function(x){
	if (x > 0) {
		1
	} else if (x == 0){
		0
	} else {
		-1
	}	
}

cppFunction('int signC(int x){
	if (x > 0) {
		return 1;
	} else if (x == 0){
		return 0;
	} else {
		return -1;
	}
}')

# the cost of loops is low in C++
sumR <- function(x){
	total <- 0 # initialize
	for (i in seq_along(x)){
		total <- total + x[1]
	}
	total
}

cppFunction('double sumC(NumericVector x){
	int n = x.size();
	double total = 0;
	for(int i = 0; i < n; ++i){
		total += x[i];
	}
	return total;
}')

# checkout microbenchmarks
x <- runif(1e3)
microbenchmark(
  sum(x),
  sumC(x),
  sumR(x)
)

pdistR <- function(x, ys){
	sqrt((x - ys) ^ 2)
}

cppFunction('NumericVector pdistC(double x, NumericVector ys){
	int n = ys.size();
	NumericVector out(n);

	for(int i = 0; i < n; ++i){
		out[i] = sqrt(pow(ys[i]- x, 2.0));
	}
	return out;
}')

# matrix input vector output
cppFunction('NumericVector rowSumsC(NumericMatrix x){
	int nrow = x.nrow(), ncol = x.ncol();
	NumericVector out(nrow);

	for(int i = 0; i < nrow; i++){
		double total = 0;
		for (int j = 0; j < ncol; j++){
			total += x(i, j);
		}
		out[i] = total;
	}
	return out;
}')

set.seed(1014)
x <- matrix(sample(100), 10)
rowSums(x)
rowSumsC(x)

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/meanC.cpp")
library(microbenchmark)
microbenchmark(
  mean(x),
  meanC(x)
)

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/attrib.cpp")
sourceCpp("/Users/Cody_2/git.repos/learn_cpp/mpe.cpp")
sourceCpp("/Users/Cody_2/git.repos/learn_cpp/callWithOne.cpp")


mod <- lm(mpg ~ wt, data = mtcars)
mod

mpe(mod)
mpe(x)

mod
str(mod)

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/scalar_missing.cpp")
str(scalar_missings()) # uhh ohh! type coercion, T, F, NA in R
sourceCpp("/Users/Cody_2/git.repos/learn_cpp/missing_sampler.cpp")
str(missing_sampler())


sourceCpp("/Users/Cody_2/git.repos/learn_cpp/is_naC.cpp")
is_naC(c(NA, 5.4, 3.2, NA))

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/sum3.cpp")

sum3(c(5, 4, 5))

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/sum4.cpp")

sum3(c(5, 4, 5, 5))

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/findInterval2.cpp")

sourceCpp("/Users/Cody_2/git.repos/learn_cpp/rleC.cpp")

# gibbs sampler example
gibbs_r <- function(N, thin){
	mat <- matrix(nrow = N, ncol = 2)
	x <- y <- 0

	for (i in 1:N){
		for(j in 1:thin){
			x <- rgamma(1, 3, y * y + 4)
			y <- rnorm(1, 1 / (x + 1), 1 / sqrt(2*(x + 1)))
		}
		mat[i, ] <- c(x, y)
	}
	mat
}
sourceCpp("/Users/Cody_2/git.repos/learn_cpp/gibbs.cpp")


microbenchmark(gibbs_r(100, 10), gibbs_cpp(100, 10))









