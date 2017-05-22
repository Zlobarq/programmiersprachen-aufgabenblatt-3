# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  )
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  tests.cpp
  )
# Build tests
add_executable(beispielprogramm
  beispielprogramm.cpp
  )
# Build tests
add_executable(aufgabe2bis4
  aufgabe2bis4.cpp
  )
# Build tests
add_executable(aufgabe5
  aufgabe5.cpp
  )
# Build tests
add_executable(aufgabe7
  aufgabe7.cpp
  )
# Build tests
add_executable(aufgabe8
  aufgabe8.cpp
  )
# Build tests
add_executable(aufgabe9
  aufgabe9.cpp
  )
# Build tests
add_executable(aufgabe10
  aufgabe10.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )


