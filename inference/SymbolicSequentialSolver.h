/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation,
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved
 * Authors: Frank Dellaert, et al. (see THANKS for the full author list)

 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file    SymbolicSequentialSolver.h
 * @brief   
 * @author  Richard Roberts
 * @created Oct 21, 2010
 */
#pragma once

#include <gtsam/inference/GenericSequentialSolver.h>
#include <gtsam/inference/SymbolicFactorGraph.h>

namespace gtsam {

// The base class provides all of the needed functionality
typedef GenericSequentialSolver<IndexFactor> SymbolicSequentialSolver;

//class SymbolicSequentialSolver : GenericSequentialSolver<IndexFactor> {
//
//protected:
//
//  typedef GenericSequentialSolver<IndexFactor> Base;
//
//public:
//
//  SymbolicSequentialSolver(const FactorGraph<IndexFactor>& factorGraph);
//
//  /**
//   * Eliminate the factor graph sequentially.  Uses a column elimination tree
//   * to recursively eliminate.
//   */
//  BayesNet<IndexConditional>::shared_ptr eliminate() const;
//
//  /**
//   * Compute the marginal Gaussian density over a variable, by integrating out
//   * all of the other variables.  This function returns the result as a factor.
//   */
//  IndexFactor::shared_ptr marginal(Index j) const;
//
//  /**
//   * Compute the marginal joint over a set of variables, by integrating out
//   * all of the other variables.  This function returns the result as an upper-
//   * triangular R factor and right-hand-side, i.e. a GaussianBayesNet with
//   * R*x = d.  To get a mean and covariance matrix, use jointStandard(...)
//   */
//  SymbolicFactorGraph::shared_ptr joint(const std::vector<Index>& js) const;
//
//};

}

