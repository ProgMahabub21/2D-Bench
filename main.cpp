#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display()
{
    glClearColor(0.8f, 0.8f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(12);
    float y1=45.5;
    float y2=47.5;
    //colors

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(46,-70);
    glVertex2f(48,-70);
    glVertex2f(48,-60);
    glVertex2f(46,-60);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(60,-70);
    glVertex2f(62,-70);
    glVertex2f(62,-60);
    glVertex2f(60,-60);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,102, 0);
    glVertex2f(44,-60);
    glVertex2f(64,-60);
    glVertex2f(64,-58);
    glVertex2f(44,-58);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 102,0);
    glVertex2f(45,-58);
    glVertex2f(63,-58);
    glVertex2f(63,-57);
    glVertex2f(45,-57);


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51,0);
    glVertex2f(46.5,-57);
    glVertex2f(48,-57);
    glVertex2f(48,-45);
    glVertex2f(46.5,-45);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(60,-57);
    glVertex2f(61.5,-57);
    glVertex2f(61.5,-45);
    glVertex2f(60,-45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204,102,0);
    for(int i =0; i<3; i++)
    {
        glVertex2f(45.5,-y1);
        glVertex2f(45.5,-y2);
        glVertex2f(62.5,-y2);
        glVertex2f(62.5,-y1);

        y1 += 3;
        y2 += 3;
    }

    glEnd();

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1080, 600);    // Set the window's initial width & height
    glutCreateWindow("Rainbow flag"); // Create a window with the given title
    gluOrtho2D(40.0, 100.0, -80.0, -20.0);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
