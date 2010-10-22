/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation,
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved
 * Authors: Frank Dellaert, et al. (see THANKS for the full author list)

 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file    SymbolicMultifrontalSolver.cpp
 * @brief   
 * @author  Richard Roberts
 * @created Oct 22, 2010
 */

#include <gtsam/inference/SymbolicMultifrontalSolver.h>
#include <gtsam/inference/JunctionTree-inl.h>

namespace gtsam {

template class GenericMultifrontalSolver<IndexFactor, JunctionTree<FactorGraph<IndexFactor> > >;

}
