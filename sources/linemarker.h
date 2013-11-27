#ifndef LINEMARKER_H
#define LINEMARKER_H
#include  "camera.h"

void onMouse(int event, int x, int y, int flags, void* userdata);

class LineMarker
{ 
public:
    LineMarker();
    lineSet markLines();
    lineSet displayCamera();
};

#endif // LINEMARKER_H
