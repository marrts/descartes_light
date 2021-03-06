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
#include <descartes_light/visibility_control.h>
#include <descartes_samplers/evaluators/impl/gantry_euclidean_distance_edge_evaluator.hpp>

namespace descartes_light
{
// Explicit template instantiation
template class DESCARTES_PUBLIC GantryEuclideanDistanceEdgeEvaluator<float>;
template class DESCARTES_PUBLIC GantryEuclideanDistanceEdgeEvaluator<double>;

}  // namespace descartes_light
