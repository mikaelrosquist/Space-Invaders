#ifndef __Game__Bullet__
#define __Game__Bullet__

#include <SDL/SDL.h>
#include "Sprite.h"

namespace engine {
    
    class Bullet: public Sprite {
    private:
        int value;
        Bullet ( Bullet& other); //Copy-konstruktorn läggs privat för att förhindra värdesemantik
        Bullet& operator= (Bullet& other); //Tilldelning läggs privat för att förhindra värdesemantik
        
    protected:
        Bullet(int x, int y, int w, int h, int value);//Konstruktor protected, bara subklasser har tillgång till den.
        
        
    public:
        static Bullet* getInstance (int x, int y, int w, int h, int value);// För att förberda för subklasser av ship.
        ~Bullet();
        void tick();
        void draw();
        
        
    };
}

#endif /* defined(__Game__Bullet__) */