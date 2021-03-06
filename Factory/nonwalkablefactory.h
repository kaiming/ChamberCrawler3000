#ifndef __NONWALKABLEFACTORY_H__
#define __NONWALKABLEFACTORY_H__
#include "factory.h"

class Tile;

class NonWalkableFactory : public Factory {
  public:
    // makeTile creates a tile that players and enemies are not able to walk on
    std::shared_ptr<Tile> makeTile(char type, int x, int y, std::shared_ptr<Character> occupant = nullptr, std::shared_ptr<Potion> potion = nullptr, std::shared_ptr<Gold> gold = nullptr, bool exit = false) override;
};

#endif
