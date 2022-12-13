#include <GL/freeglut.h> // GLUT, include glu.h and gl.h
#include <windows.h> // for MS Windows
#define PI 3.141516
#include <math.h>
#include <GL/gl.h>

void khar1 (float translateX, float translateY, float scaleX, float scaleY) {

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);

     glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(154,129,35); // Yellow (Khar)

    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.28f, -0.62f);
    glVertex2f(-0.283f, -0.68f);
    glVertex2f(-0.32f, -0.76f);
    glVertex2f(-0.324f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.27f, -0.6f);

    glEnd();



    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(134,111,28); // Yellow (khar shade)

    glVertex2f(-0.255f, -0.57f);
    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.24f, -0.834f);
    glVertex2f(-0.19f, -0.82f);
    glVertex2f(-0.2f, -0.77f);
    glVertex2f(-0.22f, -0.7f);

    glVertex2f(-0.23f, -0.65f);
    glVertex2f(-0.232f, -0.6f);
    glVertex2f(-0.25f, -0.588f);
    glEnd();

    glPopMatrix();
}


void circle(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);


    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}


void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(82, 75, 55); // Yellow (Land Brown  polygon 1st)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.95f, -0.63f);
    glVertex2f(0.9f, -0.65f);
    glVertex2f(0.8f, -0.62f);
    glVertex2f(0.7f, -0.61f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.5f, -0.61f);
    glVertex2f(0.45f, -0.58f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.3f, -0.68f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.65f);
    glVertex2f(0.0f, -0.62f);
    glVertex2f(-0.1f, -0.64f);
    glVertex2f(-0.2f, -0.59f);
    glVertex2f(-0.25f, -0.598f);
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.57f);
    glVertex2f(-0.5f, -0.585f);
    glVertex2f(-0.55f, -0.58f);
    glVertex2f(-0.6f, -0.59f);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.85f, -0.61f);
    glVertex2f(-0.9f, -0.62f);
    glVertex2f(-0.95f, -0.61f);
    glVertex2f(-1.0f, -0.57f);

    glEnd();


    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(76, 152, 173); // Yellow (Water-land polygon )
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.8f, -0.64f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.6f, -0.62f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.4f, -0.67f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.25f, -0.62f);
    glVertex2f(-0.3f, -0.64f);
    glVertex2f(-0.4f, -0.63f);
    glVertex2f(-0.5f, -0.61f);
    glVertex2f(-0.55f, -0.63f);
    glVertex2f(-0.6f, -0.63f);
    glVertex2f(-0.7f, -0.65f);
    glVertex2f(-0.8f, -0.66f);
    glVertex2f(-0.85f, -0.67f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.95f, -0.638f);
    glVertex2f(-1.0f, -0.6f);

    glEnd();

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(81, 110, 57); // Yellow (Land Green polygon 2nd)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(0.95f, -0.7f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.8f, -0.69f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.6f, -0.68f);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.45f, -0.68f);
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.2f, -0.72f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.0f, -0.72f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.3f, -0.69f);
    glVertex2f(-0.4f, -0.68f);
    glVertex2f(-0.5f, -0.66f);
    glVertex2f(-0.55f, -0.665f);
    glVertex2f(-0.6f, -0.689f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.85f, -0.72f);
    glVertex2f(-0.9f, -0.7f);
    glVertex2f(-0.95f, -0.688f);
    glVertex2f(-1.0f, -0.65f);

    glEnd();

    glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad
    glColor3ub(86, 62, 27); // Saddle Brown (Chader oikhnaei Triangle ta)

    glVertex2f(0.37, -0.6); // x, y
    glVertex2f(0.13, -0.6);
    glVertex2f(0.3, -0.41);

    glEnd();

    glBegin(GL_QUADS);      // Each set of 4 vertices form a quad
    glColor3ub(86, 62, 27); // Saddle Brown (House er Ekdom Middle Quad)

    glVertex2f(0.34f, -0.5f); // x, y
    glVertex2f(0.34f, -0.714f);
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.45f, -0.5f);

    glEnd();
    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(166, 121, 47); // Yellow (Bashar majhe ekta polygon draw)
    glVertex2f(0.2f, -0.53f);
    glVertex2f(0.2f, -0.713f);
    glVertex2f(0.34f, -0.711f);
    glVertex2f(0.34f, -0.53f);
    glVertex2f(0.30f, -0.52f);
    glVertex2f(0.22f, -0.53f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 1st)

    glVertex2f(0.16f, -0.7f); // x, y
    glVertex2f(0.16f, -0.77f);
    glVertex2f(0.166f, -0.77f);
    glVertex2f(0.166f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche Stick 2nd)

    glVertex2f(0.18f, -0.7f); // x, y
    glVertex2f(0.18f, -0.75f);
    glVertex2f(0.186f, -0.75f);
    glVertex2f(0.186f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(207, 156, 77); // Saddle Brown (House er Left Side er Quad)

    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.16f, -0.7f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.2f, -0.53f);

    glEnd();

    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(166, 121, 47); // Saddle Brown (House er Door er Right er Quad)

    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.66f, -0.69f);
    glVertex2f(0.66f, -0.5f);

    glEnd();
    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad)

    glVertex2f(0.24f, -0.41f); // x, y
    glVertex2f(0.12f, -0.56f);
    glVertex2f(0.16f, -0.59f);
    glVertex2f(0.3f, -0.41f);

    glEnd();
    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Ektu Kom Brown (house chad er ta)

    glVertex2f(0.25f, -0.3f);  // x, y
    glVertex2f(0.32f, -0.51f); // x, y

    glVertex2f(0.69f, -0.51f); // x, y
    glVertex2f(0.58f, -0.3f);  // x, y
    glEnd();

    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad
    glColor3ub(121, 88, 38); // Saddle Brown (Chader oikhnaei Triangle ta)

    glVertex2f(0.25f, -0.3f); // x, y
    glVertex2f(0.24f, -0.41f);
    glVertex2f(0.29f, -0.41f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 1st)

    glVertex2f(0.13f, -0.55f); // x, y
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.15f, -0.57f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)

    glVertex2f(0.15f, -0.57f); // x, y
    glVertex2f(0.12f, -0.58f);
    glVertex2f(0.16f, -0.59f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)

    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.18f, -0.566f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)

    glVertex2f(0.16f, -0.59f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.16f, -0.55f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 1st)

    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.33f, -0.53f);
    glVertex2f(0.35f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)

    glVertex2f(0.35f, -0.5f); // x, y
    glVertex2f(0.4f, -0.53f);
    glVertex2f(0.45f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)

    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.43f, -0.53f);
    glVertex2f(0.5f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 4th)

    glVertex2f(0.5f, -0.5f); // x, y
    glVertex2f(0.55, -0.53f);
    glVertex2f(0.6f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 5th)

    glVertex2f(0.6f, -0.5f); // x, y
    glVertex2f(0.65, -0.54f);
    glVertex2f(0.68f, -0.5f);

    glEnd();

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(59, 79, 40); // Yellow (House Shadow)

    glVertex2f(0.18f, -0.73f);
    glVertex2f(0.13f, -0.77f);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.72f, -0.83f);
    glVertex2f(0.7f, -0.71f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 3rd)

    glVertex2f(0.2f, -0.71f); // x, y
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.205f, -0.77f);
    glVertex2f(0.205f, -0.71f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 9th)

    glVertex2f(0.62f, -0.69f); // x, y
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.627f, -0.75f);
    glVertex2f(0.627f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 8th)

    glVertex2f(0.58f, -0.69f); // x, y
    glVertex2f(0.58f, -0.75f);
    glVertex2f(0.587f, -0.75f);
    glVertex2f(0.587f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 7th)

    glVertex2f(0.54f, -0.69f); // x, y
    glVertex2f(0.54f, -0.75f);
    glVertex2f(0.547f, -0.75f);
    glVertex2f(0.547f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 6th)

    glVertex2f(0.50f, -0.69f); // x, y
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.507f, -0.75f);
    glVertex2f(0.507f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 5th)

    glVertex2f(0.47f, -0.69f); // x, y
    glVertex2f(0.47f, -0.75f);
    glVertex2f(0.477f, -0.75f);
    glVertex2f(0.477f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 10th)

    glVertex2f(0.64f, -0.69f); // x, y
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.647f, -0.77f);
    glVertex2f(0.647f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House Ladder 1st)

    glVertex2f(0.36f, -0.7f); // x, y
    glVertex2f(0.37f, -0.8f);
    glVertex2f(0.380f, -0.8f);
    glVertex2f(0.370f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House Ladder 2nd)

    glVertex2f(0.43f, -0.7f); // x, y
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.450f, -0.8f);
    glVertex2f(0.440f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.365, -0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365, -0.73);
    glVertex2f(0.44, -0.72);
    glVertex2f(0.44, -0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.365, -0.75); // (house ladder mid stick 2nd)
    glVertex2f(0.365, -0.76);
    glVertex2f(0.44, -0.75);
    glVertex2f(0.44, -0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.368, -0.78); // (house ladder mid stick 3rd)
    glVertex2f(0.369, -0.79);
    glVertex2f(0.44, -0.78);
    glVertex2f(0.44, -0.77);
    glEnd();

    glColor3ub(38, 80, 0); //(Main Tree Darkleaf 1st )

    circle(0.8, -0.44, 0.055, 2);
    circle(0.85, -0.52, 0.05, 2);
    circle(0.75, -0.52, 0.05, 2);

    glColor3ub(55, 119, 0); //(Leaf Dark Green 3th)
    circle(0.74, -0.26, 0.055, 2);
    circle(0.78, -0.2, 0.06, 2);
    circle(0.83, -0.25, 0.06, 2);
    circle(0.8, -0.34, 0.06, 2);

    glColor3ub(48, 98, 0); //(Leaf Dark Green Shade 3th)
    circle(0.73, -0.27, 0.055, 2);
    circle(0.77, -0.21, 0.06, 2);
    circle(0.82, -0.26, 0.06, 2);
    circle(0.79, -0.35, 0.06, 2);

    glColor3ub(103, 159, 26); //(Leaf  Green 2nd)
    circle(0.71, -0.44, 0.055, 2);
    circle(0.7, -0.38, 0.055, 2);
    circle(0.72, -0.34, 0.055, 2);
    circle(0.75, -0.4, 0.045, 2);

    glColor3ub(94, 144, 29); //(Lead Shade green 2nd)
    circle(0.7, -0.45, 0.055, 2);
    circle(0.69, -0.39, 0.055, 2);
    circle(0.71, -0.35, 0.055, 2);
    circle(0.74, -0.41, 0.045, 2);

    glColor3ub(77, 131, 11); //(Leaf Dark Green 4th)
    circle(0.9, -0.32, 0.055, 2);
    circle(0.915, -0.38, 0.06, 2);
    circle(0.91, -0.42, 0.05, 2);
    circle(0.88, -0.44, 0.055, 2);
    circle(0.86, -0.4, 0.055, 2);

    glColor3ub(89, 150, 17); //(Leaf Dark Green Shade 4th)
    circle(0.89, -0.33, 0.055, 2);
    circle(0.905, -0.39, 0.06, 2);
    circle(0.9, -0.43, 0.05, 2);
    circle(0.87, -0.45, 0.055, 2);
    circle(0.85, -0.41, 0.055, 2);

    glColor3ub(139, 95, 60); // Yellow (Main tree)
    glBegin(GL_POLYGON);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glVertex2f(0.808, -0.84);
    glVertex2f(0.8, -0.84);
    glVertex2f(0.79, -0.85);
    glVertex2f(0.778, -0.8525);
    glVertex2f(0.775, -0.85);
    glVertex2f(0.775, -0.8275);
    glVertex2f(0.779, -0.8);
    glVertex2f(0.784, -0.7625);
    glVertex2f(0.79, -0.7175);
    glVertex2f(0.792, -0.685);
    glVertex2f(0.793, -0.66);
    glVertex2f(0.793, -0.635);
    glVertex2f(0.79, -0.605);
    glVertex2f(0.788, -0.58);
    glVertex2f(0.783, -0.5675);
    glVertex2f(0.779, -0.5375);
    glVertex2f(0.774, -0.5125);
    glVertex2f(0.765, -0.48);
    glVertex2f(0.762, -0.47);
    glVertex2f(0.77, -0.455);
    glVertex2f(0.785, -0.4975);
    glVertex2f(0.791, -0.5);
    glVertex2f(0.798, -0.495);
    glVertex2f(0.804, -0.485);
    glVertex2f(0.805, -0.47);
    glVertex2f(0.808, -0.4375);
    glVertex2f(0.808, -0.43);
    glVertex2f(0.821, -0.44);
    glVertex2f(0.819, -0.465);
    glVertex2f(0.818, -0.485);
    glVertex2f(0.818, -0.52);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.819, -0.5475);
    glVertex2f(0.823, -0.5475);
    glVertex2f(0.827, -0.5325);
    glVertex2f(0.829, -0.5125);
    glVertex2f(0.835, -0.48);
    glVertex2f(0.836, -0.4725);
    glVertex2f(0.846, -0.4875);
    glVertex2f(0.842, -0.5425);
    glVertex2f(0.835, -0.5725);
    glVertex2f(0.833, -0.6025);
    glVertex2f(0.832, -0.6475);
    glVertex2f(0.832, -0.665);
    glVertex2f(0.833, -0.695);
    glVertex2f(0.837, -0.7225);
    glVertex2f(0.841, -0.755);
    glVertex2f(0.85, -0.795);
    glVertex2f(0.858, -0.8325);
    glVertex2f(0.86, -0.845);
    glVertex2f(0.853, -0.8475);
    glVertex2f(0.843, -0.84);
    glVertex2f(0.84, -0.835);
    glVertex2f(0.836, -0.84);
    glVertex2f(0.833, -0.855);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);

    glEnd();

    khar1(0.3, 0.0, 1.0, 1.0);



    glFlush(); // Render now

}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv); // Initialize GLUT

    //glutInitDisplayMode(GLUT_RGB | GLUT_MULTISAMPLE);
    glutCreateWindow("OpenGL Setup"); // Create a window with the given title
    glutInitWindowSize(800, 800);     // Set the window's initial width & height
    glutDisplayFunc(display);         // Register display callback handler for window re-paint
    //glutTimerFunc(100, update, 0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
