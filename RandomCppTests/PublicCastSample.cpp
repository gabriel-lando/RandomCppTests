#include "PublicCastSample.h"

#include <iostream>

namespace pcs {
    class TestClass {
    private:
        int secret;
    public:
        TestClass() : secret(0) {}
        explicit TestClass(int x) : secret(x) {}
    };

    template <class X, class Y>
    struct public_cast {
        static inline X x{};
    };

    template <class Y, auto X>
    struct access {
        static const inline auto t = public_cast<decltype(X), Y>::x = X;
    };

    template struct access<class PublicCast, &TestClass::secret>;

    void PublicCastSample(int x) {

        auto ac = TestClass(x);

        auto secret = ac.*public_cast<int TestClass::*, PublicCast>::x;

        std::cout << secret << std::endl;
    }
}

