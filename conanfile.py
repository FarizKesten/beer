from conans import ConanFile, CMake

class MyProject(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = "zlib/1.3"

    generators = "cmake"
def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

def imports(self):
    self.copy("*.dll", dst="bin", src="bin")
    self.copy("*.dylib*", dst="bin", src="lib")