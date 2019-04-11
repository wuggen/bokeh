#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "canvas.h"
#include "bokeh_canvas.h"
#include "util.h"

#include "mesh.h"

#include <Windows.h>

int main(int argc, char **argv) {

  char buf[128];
  GetCurrentDirectory(128, buf);
  std::cout << "Working directory: " << buf << std::endl;

  BokehCanvasConf conf;
  //conf.cam_pos = glm::vec3(0.5, 1.0, 0.75);
  conf.cam_pos = glm::vec3(1.0, 4.5, 3.0);
  conf.cam_poi = glm::vec3(0.0);
  conf.bg_color = glm::vec3(1.0, 0.95, 0.95);
  conf.objfile = argv[1];
  BokehCanvas canvas(800, 800, conf);
  canvas.make_active();

  Canvas::run();

  return 0;
}
