/*****************************************************************************
 *   GATB : Genome Assembly Tool Box
 *   Copyright (C) 2014  INRIA
 *   Authors: R.Chikhi, G.Rizk, D.Lavenier, E.Drezen
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef _GATB_TOOLS_GRAPH_SIMPLIFICATION_HPP_
#define _GATB_TOOLS_GRAPH_SIMPLIFICATION_HPP_

/********************************************************************************/

#include <gatb/gatb_core.hpp>

/********************************************************************************/

/** */
class GraphSimplification : public SmartPointer
{
public:

    GraphSimplification (const Graph& graph)
        : _graph(graph){}

    unsigned long removeTips();
    unsigned long removeBubbles();

protected:
    const Graph&  _graph;
};

/********************************************************************************/

#endif 
