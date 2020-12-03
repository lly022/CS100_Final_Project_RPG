#ifndef __PROTOTYPE_TESTS_H__
#define __PROTOTYPE_TESTS_H__

#include "gtest/gtest.h"
#include "../Player.h"
#include "../EnemyFactory.h"
#include "../ArmorFactory.h"
#include "../WeaponFactory.h"

TEST(PrototypeTests, IronArmorPrototypeTest)
{
    ItemFactory* af = new ArmorFactory();
    Item* armor = af->createItem("Iron Armor");


    EXPECT_EQ(armor->baseStats->ATK, 0);
    EXPECT_EQ(armor->baseStats->DEF, 2);
    EXPECT_EQ(armor->baseStats->HP, 0);
    EXPECT_EQ(armor->baseStats->maxHP, 0);
    EXPECT_EQ(armor->combatStats->ATK, 0);
    EXPECT_EQ(armor->combatStats->DEF, 2);
    EXPECT_EQ(armor->combatStats->HP, 0);
    EXPECT_EQ(armor->combatStats->maxHP, 0);
    
    EXPECT_EQ(armor->getCost(), 450);
    EXPECT_EQ(armor->getName(), "Iron Armor");

    armor->setCost(9999);
    armor->setName("Super cool Iron Armor");

    EXPECT_EQ(armor->getCost(), 9999);
    EXPECT_EQ(armor->getName(), "Super cool Iron Armor");
    
}

TEST(PrototypeTests, LeatherArmorPrototypeTest)
{
    ItemFactory* af = new ArmorFactory();
    Item* armor = af->createItem("Leather Armor");


    EXPECT_EQ(armor->baseStats->ATK, 0);
    EXPECT_EQ(armor->baseStats->DEF, 1);
    EXPECT_EQ(armor->baseStats->HP, 0);
    EXPECT_EQ(armor->baseStats->maxHP, 0);
    EXPECT_EQ(armor->combatStats->ATK, 0);
    EXPECT_EQ(armor->combatStats->DEF, 1);
    EXPECT_EQ(armor->combatStats->HP, 0);
    EXPECT_EQ(armor->combatStats->maxHP, 0);
    
    EXPECT_EQ(armor->getCost(), 50);
    EXPECT_EQ(armor->getName(), "Leather Armor");

    armor->setCost(9999);
    armor->setName("Super cool Leather Armor");

    EXPECT_EQ(armor->getCost(), 9999);
    EXPECT_EQ(armor->getName(), "Super cool Leather Armor");
    
}

TEST(PrototypeTests, StoneSwordPrototypeTest)
{
    ItemFactory* wf = new WeaponFactory();
    Item* weapon = wf->createItem("Stone Sword");


    EXPECT_EQ(weapon->baseStats->ATK, 2);
    EXPECT_EQ(weapon->baseStats->DEF, 0);
    EXPECT_EQ(weapon->baseStats->HP, 0);
    EXPECT_EQ(weapon->baseStats->maxHP, 0);
    EXPECT_EQ(weapon->combatStats->ATK, 2);
    EXPECT_EQ(weapon->combatStats->DEF, 0);
    EXPECT_EQ(weapon->combatStats->HP, 0);
    EXPECT_EQ(weapon->combatStats->maxHP, 0);
    
    EXPECT_EQ(weapon->getCost(), 100);
    EXPECT_EQ(weapon->getName(), "Stone Sword");

    weapon->setCost(9999);
    weapon->setName("Super cool Stone Sword");

    EXPECT_EQ(weapon->getCost(), 9999);
    EXPECT_EQ(weapon->getName(), "Super cool Stone Sword");
    
}

TEST(PrototypeTests, WoodenSwordPrototypeTest)
{
    ItemFactory* wf = new WeaponFactory();
    Item* weapon = wf->createItem("Wooden Sword");


    EXPECT_EQ(weapon->baseStats->ATK, 1);
    EXPECT_EQ(weapon->baseStats->DEF, 0);
    EXPECT_EQ(weapon->baseStats->HP, 0);
    EXPECT_EQ(weapon->baseStats->maxHP, 0);
    EXPECT_EQ(weapon->combatStats->ATK, 1);
    EXPECT_EQ(weapon->combatStats->DEF, 0);
    EXPECT_EQ(weapon->combatStats->HP, 0);
    EXPECT_EQ(weapon->combatStats->maxHP, 0);
    
    EXPECT_EQ(weapon->getCost(), 25);
    EXPECT_EQ(weapon->getName(), "Wooden Sword");

    weapon->setCost(9999);
    weapon->setName("Super cool Wooden Sword");

    EXPECT_EQ(weapon->getCost(), 9999);
    EXPECT_EQ(weapon->getName(), "Super cool Wooden Sword");
    
}

TEST(PrototypeTests, GoblinPrototypeTest)
{
    EnemyFactory* ef = new EnemyFactory();
    Enemy* enemy = ef->createEnemy("Goblin");

    EXPECT_EQ(enemy->baseStats->ATK, 3);
    EXPECT_EQ(enemy->baseStats->DEF, 1);
    EXPECT_EQ(enemy->baseStats->HP, 4);
    EXPECT_EQ(enemy->baseStats->maxHP, 4);
    EXPECT_EQ(enemy->combatStats->ATK, 3);
    EXPECT_EQ(enemy->combatStats->DEF, 1);
    EXPECT_EQ(enemy->combatStats->HP, 4);
    EXPECT_EQ(enemy->combatStats->maxHP, 4);
    
    EXPECT_EQ(enemy->getName(), "Goblin");
    EXPECT_EQ(enemy->getLevel(), 1);
    EXPECT_EQ(enemy->getDescription(), "Adventurous, greedy, and loot-heavy! Goblins tend to have a higher chance to drop items.");

    enemy->setName("Mega Goblin");
    enemy->setLevel(2);
    enemy->setDescription("test desc.");

    EXPECT_EQ(enemy->getName(), "Mega Goblin");
    EXPECT_EQ(enemy->getLevel(), 2);
    EXPECT_EQ(enemy->getDescription(), "test desc.");
    
}

#endif // __PROTOTYPE_TESTS_H__