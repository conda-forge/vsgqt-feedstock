#include <vsgQt/Viewer.h>

#include <QCoreApplication>

int main(int argc, char** argv)
{
    QCoreApplication application(argc, argv);

    auto viewer = vsgQt::Viewer::create();
    if (!viewer)
    {
        return 1;
    }

    viewer->continuousUpdate = false;
    viewer->request();

    return viewer->requests.load() == 1 ? 0 : 1;
}
