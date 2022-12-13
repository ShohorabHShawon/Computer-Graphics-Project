#include <GL/freeglut.h> // GLUT, include glu.h and gl.h
#include <windows.h> // for MS Windows
#define PI 3.141516
#include <math.h>
#include <GL/gl.h>



void pole3(float translateX, float translateY, float scaleX, float scaleY)
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.29);
    glVertex2f(0.89, 0.38);
    glVertex2f(0.885, 0.38);
    glVertex2f(0.885, 0.29);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.885, 0.333);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.879, 0.34);
    glVertex2f(0.885, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.333);
    glVertex2f(0.895, 0.35);
    glVertex2f(0.896, 0.34);
    glVertex2f(0.89, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.88, 0.36);
    glVertex2f(0.873, 0.36);
    glVertex2f(0.873, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.895, 0.36);
    glVertex2f(0.902, 0.36);
    glVertex2f(0.902, 0.35);
    glVertex2f(0.895, 0.35);
    glEnd();
    glPopMatrix();
}



void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);



    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(1, 120, 124); // Yellow (Mountain)

    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);

    glVertex2f(0.95f, 0.35f);
    glVertex2f(0.9f, 0.357f);
    glVertex2f(0.869f, 0.381f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.771f, 0.348f);
    glVertex2f(0.7f, 0.355f);
    glVertex2f(0.671f, 0.358f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.39f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.4f, 0.39f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.413f);
    glVertex2f(0.1f, 0.389f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.1f, 0.44f);
    glVertex2f(-0.124f, 0.428f);
    glVertex2f(-0.161f, 0.38f);
    glVertex2f(-0.2f, 0.36f);
    glVertex2f(-0.223f, 0.361f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.254f, 0.45f);
    glVertex2f(-0.28f, 0.493f);
    glVertex2f(-0.32f, 0.518f);
    glVertex2f(-0.361f, 0.48f);
    glVertex2f(-0.368f, 0.45f);

    glVertex2f(-0.4f, 0.44f);
    glVertex2f(-0.5f, 0.455f);
    glVertex2f(-0.534f, 0.444f);
    glVertex2f(-0.6f, 0.49f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.74f, 0.43f);
    glVertex2f(-0.8f, 0.42f);
    glVertex2f(-0.818f, 0.422f);
    glVertex2f(-0.9f, 0.45f);

    glVertex2f(-0.95f, 0.418f);
    glVertex2f(-1.0f, 0.4f);

    glEnd();

    glBegin(GL_POLYGON);       // These vertices form a closed polygon
    glColor3ub(151, 190, 190); // Yellow (Mountain)

    glVertex2f(-1.00f, 0.28f);
    glVertex2f(1.00f, 0.28f);
    glColor3ub(0, 104, 105); // Yellow (Mountain)
    glVertex2f(0.95f, 0.33f);
    glVertex2f(0.90f, 0.337f);
    glVertex2f(0.869f, 0.361f);
    glVertex2f(0.80f, 0.33f);
    glVertex2f(0.771f, 0.328f);
    glVertex2f(0.70f, 0.335f);
    glVertex2f(0.671f, 0.338f);
    glVertex2f(0.60f, 0.33f);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.50f, 0.38f);
    glVertex2f(0.40f, 0.37f);
    glVertex2f(0.30f, 0.38f);
    glVertex2f(0.20f, 0.393f);
    glVertex2f(0.10f, 0.369f);
    glVertex2f(0.00f, 0.40);
    glVertex2f(-0.10f, 0.42f);
    glVertex2f(-0.124f, 0.408f);
    glVertex2f(-0.161f, 0.36f);
    glVertex2f(-0.20f, 0.34f);
    glVertex2f(-0.223f, 0.341f);
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.254f, 0.43f);
    glVertex2f(-0.28f, 0.473f);
    glVertex2f(-0.32f, 0.498f);
    glVertex2f(-0.361f, 0.46f);
    glVertex2f(-0.368f, 0.43f);
    glVertex2f(-0.40f, 0.42f);
    glVertex2f(-0.50f, 0.435f);
    glVertex2f(-0.534f, 0.424f);
    glVertex2f(-0.60f, 0.47f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.70f, 0.46f);
    glVertex2f(-0.74f, 0.41f);
    glVertex2f(-0.80f, 0.40);
    glVertex2f(-0.818f, 0.402f);
    glVertex2f(-0.90f, 0.43f);
    glVertex2f(-0.95f, 0.398f);
    glVertex2f(-1.00f, 0.38f);

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.34f); // x, y
    glVertex2f(0.6f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.33f);  // x, y
    glVertex2f(0.379, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.34f); // x, y
    glVertex2f(0.1f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.33f);    // x, y
    glVertex2f(-0.179f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.34f); // x, y
    glVertex2f(-0.4f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.33f);   // x, y
    glVertex2f(-0.679f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.34f); // x, y
    glVertex2f(-1.3f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.34f); // x, y
    glVertex2f(1.2f, 0.32f);   // x, y

    glEnd();

    //2nd wire

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.35f); // x, y
    glVertex2f(0.6f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.34f);  // x, y
    glVertex2f(0.379, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.35f); // x, y
    glVertex2f(0.1f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.34f);    // x, y
    glVertex2f(-0.179f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.35f); // x, y
    glVertex2f(-0.4f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.34f);   // x, y
    glVertex2f(-0.679f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.35f); // x, y
    glVertex2f(-1.3f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.35f); // x, y
    glVertex2f(1.2f, 0.33f);   // x, y

    glEnd();


    pole3(0.0, 0.0, 1.0, 1.0);
    pole3(-0.52, 0.0, 1.0, 1.0);
    pole3(-1.08, 0.0, 1.0, 1.0);
    pole3(-1.57, 0.0, 1.0, 1.0);


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
