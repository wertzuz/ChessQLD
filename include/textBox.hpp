#include <SDL2/SDL_events.h>
#include <SDL2/SDL_timer.h>
#include <cstdint>
#include <string>
#include <sys/types.h>
class textBox {
public:
    textBox(int x, int y) :x(x), y(y){
        cursorvisible = true;
        cursorblinkrate = 500; // Cursor blink rate in milliseconds
        lastcursortoggletime = SDL_GetTicks();
    }

    void handleEvent(SDL_Event &event);
    [[nodiscard]] std::string gettext() const;

    int x, y;
    bool isDone = false;
    std::string text = "Enter ip here (Enter for localhost):";
    SDL_Color textcolor = {0, 0, 0, 255};
    bool cursorvisible;
    uint32_t cursorblinkrate;
    uint32_t lastcursortoggletime;
};

