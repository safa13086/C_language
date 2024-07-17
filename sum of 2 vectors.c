#include <stdio.h>


struct Vector2D {
    float x;
    float y;
};


struct Vector2D vector_sum(struct Vector2D v1, struct Vector2D v2) {
    struct Vector2D result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}

int main() {
    
    struct Vector2D vec1 = {2.5, 3.7};
    struct Vector2D vec2 = {1.8, -0.9};

    
    struct Vector2D sum = vector_sum(vec1, vec2);

    
    printf("Vector 1: (%.2f, %.2f)\n", vec1.x, vec1.y);
    printf("Vector 2: (%.2f, %.2f)\n", vec2.x, vec2.y);
    printf("Sum:      (%.2f, %.2f)\n", sum.x, sum.y);

    return 0;
}
