/*
 * Software License Agreement (Apache License)
 *
 * Copyright (c) 2016, Southwest Research Institute
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef DESCARTES_LIGHT_CORE_DESCARTES_LIGHT_H
#define DESCARTES_LIGHT_CORE_DESCARTES_LIGHT_H

#include "descartes_light/core/ladder_graph.h"
#include "descartes_light/core/position_sampler.h"
#include "descartes_light/core/edge_evaluator.h"

namespace descartes_light
{

template<typename FloatType>
class Solver
{
public:
  Solver(const std::size_t dof);

  bool build(const std::vector<typename PositionSampler<FloatType>::Ptr>& trajectory,
             const std::vector<descartes_core::TimingConstraint<FloatType>>& times,
             typename EdgeEvaluator<FloatType>::Ptr edge_eval);

  const std::vector<std::size_t>& getFailedVertices() const { return failed_vertices_; }
  const std::vector<std::size_t>& getFailedEdges() const { return failed_edges_; }

  bool search(std::vector<FloatType>& solution);

private:
  LadderGraph<FloatType> graph_;
  std::vector<std::size_t> failed_vertices_;
  std::vector<std::size_t> failed_edges_;
};

using SolverF = Solver<float>;
using SolverD = Solver<double>;

} // namespace descartes_light

#endif // DESCARTES_LIGHT_CORE_DESCARTES_LIGHT_H