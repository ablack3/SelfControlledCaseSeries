% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ModelFitting.R
\name{fitSccsModel}
\alias{fitSccsModel}
\title{Fit the SCCS model}
\usage{
fitSccsModel(
  sccsEraData,
  prior = createPrior("laplace", useCrossValidation = TRUE),
  control = createControl(cvType = "auto", selectorType = "byPid", startingVariance =
    0.1, noiseLevel = "quiet")
)
}
\arguments{
\item{sccsEraData}{An object of type \code{sccsEraData} as created using the
\code{\link{createSccsEraData}} function.}

\item{prior}{The prior used to fit the model. See \code{\link[Cyclops]{createPrior}} for
details.}

\item{control}{The control object used to control the cross-validation used to determine the
hyperparameters of the prior (if applicable). See
\code{\link[Cyclops]{createControl}} for details.}
}
\value{
An object of type \code{sccsModel}. Generic functions \code{summary}, \code{coef}, and
\code{confint} are available.
}
\description{
Fit the SCCS model
}
\details{
Fits the SCCS model as a conditional Poisson regression. When allowed, coefficients for some or all
covariates can be regularized.
}
\references{
Suchard, M.A., Simpson, S.E., Zorych, I., Ryan, P., and Madigan, D. (2013). Massive parallelization
of serial inference algorithms for complex generalized linear models. ACM Transactions on Modeling
and Computer Simulation 23, 10
}
