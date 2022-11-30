#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(.5);
	// Draw a Red 1x1 Square centered at origin



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(78,149,178); // Yellow (Water-land polygon 1st)
	glVertex2f(-1.0f, -0.57f);
	glVertex2f(-0.9f, -0.55f);
	glVertex2f(-0.8f, -0.56f);
	glVertex2f(-0.7f, -0.57f);
	glVertex2f(-0.6f, -0.55f);
	glVertex2f(-0.5f, -0.56f);
	glVertex2f(-0.4f, -0.54f);
	glVertex2f(-0.3f, -0.58f);
	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-1.0f, -0.7f);

	glVertex2f(-0.3f, -0.58f);
	glVertex2f(-0.2f, -0.61f);
	glVertex2f(-0.1f, -0.64f);
	glVertex2f(0.0f, -0.63f);
	glVertex2f(0.1f, -0.647f);
	glVertex2f(0.7f, -0.595f);
	glVertex2f(0.8f, -0.6f);
	glVertex2f(0.9f, -0.58f);
	glVertex2f(1.0f, -0.62f);
	glVertex2f(3.0f, -1.0f);

	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(81,110,57); // Yellow (Below Land Green polygon 1st)
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(-0.9f, -0.58f);
	glVertex2f(-0.8f, -0.6f);
	glVertex2f(-0.7f, -0.63f);
	glVertex2f(-0.6f, -0.6f);
	glVertex2f(-0.5f, -0.58f);
	glVertex2f(-0.4f, -0.59f);
	glVertex2f(-0.4f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(81,110,57); // Yellow (Below Land Green polygon 2nd)
	glVertex2f(-0.4f, -0.59f);
	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.2f, -0.62f);
	glVertex2f(-0.1f, -0.67f);
	glVertex2f(0.0f, -0.63f);
	glVertex2f(0.1f, -0.65f);
	glVertex2f(0.1f, -1.0f);
	glVertex2f(-0.4f, -1.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(81,110,57); // Yellow (Below Land Green polygon 3rd)
	glVertex2f(0.1f, -0.65f);
	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.8f, -0.62f);
	glVertex2f(0.9f, -0.65f);
	glVertex2f(1.0f, -0.63f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(0.1f, -1.0f);


	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(86 ,62 ,27); // Saddle Brown (Chader oikhnaei Triangle ta)

	glVertex2f(0.37,-0.6);    // x, y
	glVertex2f(0.13,-0.6);
	glVertex2f(0.3,-0.41);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(86,62,27); // Saddle Brown (House er Ekdom Middle Quad)

	glVertex2f(0.34f, -0.5f);    // x, y
	glVertex2f(0.34f, -0.714f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.5f);

	glEnd();
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(166, 121, 47); // Yellow (Bashar majhe ekta polygon draw)
	glVertex2f(0.2f, -0.53f);
	glVertex2f(0.2f, -0.713f);
	glVertex2f(0.34f, -0.711f);
	glVertex2f(0.34f, -0.53f);
	glVertex2f(0.30f, -0.52f);
	glVertex2f(0.22f, -0.53f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 1st)

	glVertex2f(0.16f, -0.7f);    // x, y
	glVertex2f(0.16f, -0.77f);
	glVertex2f(0.166f, -0.77f);
	glVertex2f(0.166f, -0.69f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139, 69, 19); // Saddle Brown (House er niche Stick 2nd)

	glVertex2f(0.18f, -0.7f);    // x, y
	glVertex2f(0.18f, -0.75f);
	glVertex2f(0.186f, -0.75f);
	glVertex2f(0.186f, -0.7f);

	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(207, 156, 77); // Saddle Brown (House er Left Side er Quad)

	glVertex2f(0.16f, -0.55f);    // x, y
	glVertex2f(0.16f, -0.7f);
	glVertex2f(0.2f, -0.71f);
	glVertex2f(0.2f, -0.53f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(166, 121, 47); // Saddle Brown (House er Door er Right er Quad)

	glVertex2f(0.45f, -0.5f);    // x, y
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.66f, -0.69f);
	glVertex2f(0.66f, -0.5f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad)

	glVertex2f(0.24f, -0.41f);    // x, y
	glVertex2f(0.12f, -0.56f);
	glVertex2f(0.16f, -0.59f);
	glVertex2f(0.3f, -0.41f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(176, 136, 74); // Ektu Kom Brown (house chad er ta)

	glVertex2f(0.25f, -0.3f);    // x, y
	glVertex2f(0.32f, -0.51f);    // x, y

	glVertex2f(0.69f, -0.51f);    // x, y
	glVertex2f(0.58f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(121, 88,38); // Saddle Brown (Chader oikhnaei Triangle ta)

	glVertex2f(0.25f, -0.3f);    // x, y
	glVertex2f(0.24f, -0.41f);
	glVertex2f(0.29f, -0.41f);

	glEnd();



	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 1st)

	glVertex2f(0.13f, -0.55f);    // x, y
	glVertex2f(0.11f, -0.57f);
	glVertex2f(0.15f, -0.57f);

	glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)

	glVertex2f(0.15f, -0.57f);    // x, y
	glVertex2f(0.12f, -0.58f);
	glVertex2f(0.16f, -0.59f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)

	glVertex2f(0.16f, -0.55f);    // x, y
	glVertex2f(0.14f, -0.6f);
	glVertex2f(0.18f, -0.566f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(218, 165, 32); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)

	glVertex2f(0.16f, -0.59f);    // x, y
	glVertex2f(0.14f, -0.6f);
	glVertex2f(0.16f, -0.55f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 1st)

	glVertex2f(0.32f, -0.51f);    // x, y
	glVertex2f(0.33f, -0.53f);
	glVertex2f(0.35f, -0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)

	glVertex2f(0.35f, -0.5f);    // x, y
	glVertex2f(0.4f, -0.53f);
	glVertex2f(0.45f, -0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)

	glVertex2f(0.45f, -0.5f);    // x, y
	glVertex2f(0.43f, -0.53f);
	glVertex2f(0.5f, -0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 4th)

	glVertex2f(0.5f, -0.5f);    // x, y
	glVertex2f(0.55, -0.53f);
	glVertex2f(0.6f, -0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 5th)

	glVertex2f(0.6f, -0.5f);    // x, y
	glVertex2f(0.65, -0.54f);
	glVertex2f(0.68f, -0.5f);

	glEnd();




glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 3rd)

	glVertex2f(0.2f, -0.71f);    // x, y
	glVertex2f(0.2f, -0.77f);
	glVertex2f(0.205f, -0.77f);
	glVertex2f(0.205f, -0.71f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 9th)

	glVertex2f(0.62f, -0.69f);    // x, y
	glVertex2f(0.62f, -0.75f);
	glVertex2f(0.627f, -0.75f);
	glVertex2f(0.627f, -0.69f);

	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 8th)

	glVertex2f(0.58f, -0.69f);    // x, y
	glVertex2f(0.58f, -0.75f);
	glVertex2f(0.587f, -0.75f);
	glVertex2f(0.587f, -0.69f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 7th)

	glVertex2f(0.54f, -0.69f);    // x, y
	glVertex2f(0.54f, -0.75f);
	glVertex2f(0.547f, -0.75f);
	glVertex2f(0.547f, -0.69f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 6th)

	glVertex2f(0.50f, -0.69f);    // x, y
	glVertex2f(0.50f, -0.75f);
	glVertex2f(0.507f, -0.75f);
	glVertex2f(0.507f, -0.69f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 5th)

	glVertex2f(0.47f, -0.69f);    // x, y
	glVertex2f(0.47f, -0.75f);
	glVertex2f(0.477f, -0.75f);
	glVertex2f(0.477f, -0.69f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House er niche stick 10th)

	glVertex2f(0.64f, -0.69f);    // x, y
	glVertex2f(0.64f, -0.77f);
	glVertex2f(0.647f, -0.77f);
	glVertex2f(0.647f, -0.69f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House Ladder 1st)

	glVertex2f(0.36f, -0.7f);    // x, y
	glVertex2f(0.37f, -0.8f);
	glVertex2f(0.380f, -0.8f);
	glVertex2f(0.370f, -0.7f);

	glEnd();




	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(139,69,19); // Saddle Brown (House Ladder 2nd)

	glVertex2f(0.43f, -0.7f);    // x, y
	glVertex2f(0.44f, -0.8f);
	glVertex2f(0.450f, -0.8f);
	glVertex2f(0.440f, -0.7f);

	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(0.365,-0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365,-0.73);
    glVertex2f(0.44,-0.72);
    glVertex2f(0.44,-0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(0.365,-0.75); // (house ladder mid stick 2nd)
    glVertex2f(0.365,-0.76);
    glVertex2f(0.44,-0.75);
    glVertex2f(0.44,-0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(0.368,-0.78); // (house ladder mid stick 3rd)
    glVertex2f(0.369,-0.79);
    glVertex2f(0.44,-0.78);
    glVertex2f(0.44,-0.77);
    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(1366,768);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
