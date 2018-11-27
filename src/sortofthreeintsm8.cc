
#include <algorithm>
#include <iostream>
#include <threeintegersort.h>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                void sort(int &a, int &b, int &c) {
                    if (c < b) {
                        std::swap(c, b);
                    }
                    if (b < a) {
                        std::swap(b, a);
                    }
                    if (b > c) {
                        std::swap(b, c);
                    } else
                        std::cout << "These are the values properly sorted, from least to greatest:" << a << " " << b
                                  << " " << c << std::endl;

                }
            }
        }
    }
}