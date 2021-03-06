% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{add_torows}
\alias{add_torows}
\title{Fast addition of vector to each row of matrix}
\usage{
add_torows(x, v)
}
\arguments{
\item{x}{A matrix with dimensions n*k.}

\item{v}{A vector of length k.}
}
\value{
A matrix of dimension n*k where v is added to each row of x
}
\description{
Fast addition of vector to each row of a matrix. This corresponds to t(t(x) + v)
}
\examples{

A <- matrix(1:12, ncol=3)
B <- c(1, 2, 3)

add_torows(A, B)

}
\author{
Claus Ekstrom <claus@rprimer.dk>
}
