#include "obj.h"

GLfloat concha_spoon[4][4][3] = {
    {
        { -0.5, 0.80, 0},    { -0.15, 1.25, 0}, 
        { 0.15, 1.25, 0},     { 0.5, 0.80, 0}
    },
    {
        { -0.75, 0.5, 0},    { -0.5, 0.5, -0.5}, 
        { 0.5, 0.5, -0.5},    {0.75, 0.5, 0}
    }, 
    {
        { -1.0, -0.5, 0},     { -0.5, -0.5, -0.5}, 
        { 0.5, -0.5, -0.5},       { 1.0, -0.5, 0}
    }, 
    {
        { -0.5, -1.0, 0},    { -0.15, -1.25, 0}, 
        { 0.15, -1.25, 0},       { 0.5, -1.0, 0}
    }
};

GLfloat concha_spoon_esp[4][4][3] = {
    {
        { -0.5, 0.80, 0},    { -0.15, 1.25, 0}, 
        { 0.15, 1.25, 0},     { 0.5, 0.80, 0}
    },
    {
        { -0.75, 0.5, 0},    { -0.5, 0.5, 0.5}, 
        { 0.5, 0.5, 0.5},    {0.75, 0.5, 0}
    }, 
    {
        { -1.0, -0.5, 0},     { -0.5, -0.5, 0.5}, 
        { 0.5, -0.5, 0.5},       { 1.0, -0.5, 0}
    }, 
    {
        { -0.5, -1.0, 0},    { -0.15, -1.25, 0}, 
        { 0.15, -1.25, 0},       { 0.5, -1.0, 0}
    }
};

GLfloat alca_spoon[4][4][3] = {
    {
        { -0.10, 1.5, 0},    { -0.05, 1.5, 0}, 
        { 0.05, 1.5, 0},     { 0.10, 1.5, 0}
    }, 
    {
        { -0.10, 0.85, 0.35},    { -0.05, 0.85, 0.50}, 
        { 0.05, 0.85, 0.50},    {0.10, 0.85, 0.35}
    }, 
    {
        { -0.25, -0.5, 0},     { -0.15, -0.5, 0}, 
        { 0.15, -0.5, 0},       { 0.25, -0.5, 0}
    }, 
    {
        { -0.15, -1.25, 0},    { -0.15, -1.5, 0}, 
        {0.15, -1.5, 0},       {0.15, -1.25, 0}
    }
};

GLfloat alca_spoon_esp[4][4][3] = {
    {
        { -0.10, 1.5, 0},    { -0.05, 1.5, 0}, 
        { 0.05, 1.5, 0},     { 0.10, 1.5, 0}
    }, 
    {
        { -0.10, 0.85, -0.35},    { -0.05, 0.85, -0.50}, 
        { 0.05, 0.85, -0.50},    {0.10, 0.85, -0.35}
    }, 
    {
        { -0.25, -0.5, 0},     { -0.15, -0.5, 0}, 
        { 0.15, -0.5, 0},       { 0.25, -0.5, 0}
    }, 
    {
        { -0.15, -1.25, 0},    { -0.15, -1.5, 0}, 
        {0.15, -1.5, 0},       {0.15, -1.25, 0}
    }
};

GLfloat
spoon_diffuse[] = { 0.7, 0.7, 0.7, 1.0 },
spoon_specular[] = { 1.0, 1.0, 1.0, 1.0 },
spoon_shininess[] = { 20.0 };


// ����С���
void draw_spoon(double x,double y,double z) {
    glColor4f(0.4, 0.4, 0.4, 0.4); // ����ɫ
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, spoon_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, spoon_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, spoon_shininess);


    glPushMatrix();
    glTranslatef(x, y, z); //1.5 + 1.25
        glScalef(0.8, 0.8, 0.8);
        // alca
        glPushMatrix();
            glTranslatef(0, -2.67, 0); //1.5 + 1.25
            drawSurface(alca_spoon);
            glColor4f(0.4, 0.4, 0.4, 0.4);
        glPopMatrix();

        // concha
        glPushMatrix();
            drawSurface(concha_spoon);
            glColor4f(0.4, 0.4, 0.4, 0.4);
        glPopMatrix();
        
    glPopMatrix();
}