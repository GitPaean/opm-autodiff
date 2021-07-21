/*
  Copyright 2021 Total SE

  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPM_ASPINPARTITION_HEADER_INCLUDED
#define OPM_ASPINPARTITION_HEADER_INCLUDED

#include <utility>
#include <vector>

namespace Dune {
    class CpGrid;
}
namespace Opm
{
class Well;
std::pair<std::vector<int>, int> partitionCells(const int num_cells,
                                                const Dune::CpGrid& grid,
                                                const std::vector<Well>& wells);

} // namespace Opm


#endif // OPM_ASPINPARTITION_HEADER_INCLUDED