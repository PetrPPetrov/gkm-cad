// Copyright 2025 Petr Petrov. All rights reserved.
// License: https://github.com/PetrPPetrov/gkm-local/blob/main/LICENSE

#pragma once

namespace GkmCad {
    struct Vec4 {
        double x, y, z, w;

        Vec4() : x(0.0), y(0.0), z(0.0), w(1.0) {
        }
    };
}
