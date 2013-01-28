/*
 * Copyright 2012-2013 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FALLTERGEIST_STATE_H
#define FALLTERGEIST_STATE_H

#include <vector>

namespace Falltergeist
{
class Game;
class Surface;
class Event;

class State
{
protected:
    Game * _game;
    std::vector<Surface *> _surfaces;
    bool _isFullscreen;
public:
    State(Game * game);
    virtual ~State();

    bool initialized;
    void add(Surface * surface);
    void blit();
    bool isFullscreen();
    virtual void init();
    virtual void think();
    virtual void handle(Event * event);
};

}
#endif // FALLTERGEIST_STATE_H
