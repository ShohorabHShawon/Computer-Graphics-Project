#include <GL/freeglut.h> // GLUT, include glu.h and gl.h
#include <windows.h> // for MS Windows
#define PI 3.141516
#include <math.h>
#include <GL/gl.h>




float birdWing= 0.6;
float bird = -3.7,bird2= -3.9;
float cloud = -1.2,cloud2=0.3;


void update(int n)

{

    if (bird >= 4.7)
        bird = -3.7;
    bird += 0.01;

    if (birdWing >= 0.9){
        birdWing = 0.5;
    }
    birdWing += 0.05;

    if (bird2 >= 4.7)
        bird2 = -3.7;
    bird2 += 0.01;

    if (cloud >=0.8 ) {
          cloud =-1.2;
    }
    cloud += 0.001;

    if (cloud2 >=0.7 ) {
          cloud2 =-1.2;
    }
    cloud2 += 0.001;



    glutPostRedisplay();
    glutTimerFunc(20, update, 0);

}

void bird1(float translateX, float translateY, float scaleX, float scaleY)
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_POLYGON); // (bird body)
    glColor3ub(0, 0, 0);
    glVertex2f(-0.5, 0.75);
    glVertex2f(-0.47, 0.72);
    glVertex2f(-0.5, 0.718);
    glVertex2f(-0.42, 0.7);
    glVertex2f(-0.365, 0.7172);
    glVertex2f(-0.34, 0.75);
    glVertex2f(-0.31, 0.73);
    glVertex2f(-0.328, 0.76);
    glVertex2f(-0.338, 0.765);

    glVertex2f(-0.48, 0.74);
    glVertex2f(-0.5, 0.75);
    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird Hand)

    glVertex2f(-0.42f, 0.75f); // x, y
    glVertex2f(-0.38f, 0.74f);
    glVertex2f(-0.40f, birdWing);

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird tail)

    glVertex2f(-0.5, 0.718); // x, y
    glVertex2f(-0.53f, 0.71f);
    glVertex2f(-0.5f, 0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird Tail 2nd)

    glVertex2f(-0.5, 0.718); // x, y
    glVertex2f(-0.53f, 0.76f);
    glVertex2f(-0.5f, 0.75f);

    glEnd();
    glPopMatrix();
}

GLfloat position = 0.0f;
GLfloat speed = 6.0f;

void circle(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    // GLfloat p1=0.8f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;  //(First cloud)
    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    // glColor3ub ( 229,227,246);

    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}


void cloud1()
{
    glColor3ub(229, 227, 246); //(Mid cloud )
    circle(0.3, 0.9, 0.05, 2);
    circle(0.21, 0.87, 0.04, 2);
    circle(0.36, 0.87, 0.04, 2);
    circle(0.28, 0.86, 0.046, 2);
    circle(0.23, 0.9, 0.025, 2);
    circle(0.35, 0.9, 0.025, 2);
    circle(0.4, 0.87, 0.025, 2);
    circle(0.33, 0.86, 0.025, 2);

    glColor3ub(204, 225, 245); //(Mid cloud shade)
    circle(0.3, 0.9, 0.043, 2);
    circle(0.21, 0.87, 0.033, 2);
    circle(0.36, 0.87, 0.033, 2);
    circle(0.28, 0.86, 0.04, 2);
    circle(0.23, 0.9, 0.02, 2);
    circle(0.35, 0.9, 0.01, 2);
    circle(0.4, 0.87, 0.01, 2);
    circle(0.33, 0.86, 0.01, 2);
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);
    // Draw a Red 1x1 Square centered at origin

    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(189, 234, 255); // Saddle Brown (Sky colour)

    glVertex2f(-1.0f, 0.3f); // x, y
    glVertex2f(1.0f, 0.3f);
    glColor3ub(122, 178, 255);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);

    glEnd();

    glColor3ub(229, 227, 246); //(1st Cloud)
    circle(0.8, 0.75, 0.052, 2);
    circle(0.74, 0.721, 0.03, 2);
    circle(0.85, 0.72, 0.03, 2);
    glColor3ub(204, 225, 245); //(1st Cloud shade)
    circle(0.8, 0.75, 0.042, 2);
    circle(0.74, 0.721, 0.025, 2);
    circle(0.85, 0.72, 0.025, 2);

    glColor3ub(229, 227, 246); // 2nd Cloud
    circle(-0.9, 0.82, 0.03, 2);
    circle(-0.83, 0.84, 0.05, 2);
    circle(-0.765, 0.823, 0.03, 2);
    glColor3ub(204, 225, 245); //(2nd cloud shade)
    circle(-0.88, 0.82, 0.02, 2);
    circle(-0.83, 0.84, 0.04, 2);
    circle(-0.784, 0.823, 0.02, 2);


    glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);

    cloud1();
    glPopMatrix(); // cloud1

    glPushMatrix();
    glScaled(1.52, 1.52, 0.0);
    glTranslatef(-0.4, -0.3, 0.0);

    cloud1();
    glPopMatrix(); // cloud2

    glPushMatrix();
    glScaled(1.1, 1.5, 0.0);
    glTranslatef(cloud, -0.45, 0.0);

    cloud1();
    glPopMatrix(); // cloud3

    glPushMatrix();
    glScaled(1.17, 1.17, 0.0);
    glTranslatef(cloud2, -0.1, 0.0);

    cloud1();
    glPopMatrix(); // cloud1-2

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad
    glColor3ub(231, 230, 244); // Saddle Brown (Sky Triangle 1st)

    glVertex2f(-1.0, 0.82); // x, y
    glVertex2f(-0.6, 0.8);
    glVertex2f(-1.0, 0.78);

    glEnd();

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad
    glColor3ub(231, 230, 244); // Saddle Brown (Sky triangle 2nd )

    glVertex2f(1.0, 0.72); // x, y
    glVertex2f(0.6, 0.7);
    glVertex2f(1.0, 0.68);

    glEnd();

    glFlush(); // Render now


    bird1(bird, 2.2, 0.25, 0.25);
    bird1(bird2, 2.0, 0.25, 0.25);


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
    glutTimerFunc(100, update, 0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
