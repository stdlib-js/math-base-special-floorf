/**
* @license Apache-2.0
*
* Copyright (c) 2020 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/math/base/special/floorf.h"
#include <math.h>

/**
* Rounds a single-precision floating-point number toward negative infinity.
*
* @param x       number
* @return        rounded value
*
* @example
* float y = stdlib_base_floorf( 3.14f );
* // returns 3.0f
*/
float stdlib_base_floorf( const float x ) {
	return floorf( x );
}