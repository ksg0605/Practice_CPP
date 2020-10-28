#include"Tower.h"

Tower::Tower(){
    height = 1;
}

Tower::Tower(int h){
    height = h;
}

int Tower::getHeight(){
    return height;
}