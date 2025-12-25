#include <iostream>

int main() {

    // image
    int image_width = 256;
    int image_height = 256;

    // render
	// p3 oznacza ze kolory sa w ascii; 256 za max color
    std::cout << "P3\n"
              << image_width << " " << image_height << "\n255\n";

    for (int i = 0; i < image_height; i++) {
        for (int j = 0; j < image_width; j++) {
			// liczby z przedzialu [0, 1]
			// np dla drugiej iteracji 1/255 
			// po width dajemy od czerni do czerwonosci
            auto r = double(j) / (image_width - 1);
			// po height od czerni do zielonego
            auto g = double(i) / (image_height - 1);
            auto b = 0.0;

			// rozciagamy liczby z [0, 1] do [0, 256]
			// 255.99 dla pewnosci ze nie przekroczymy 256
            int ir = int(255.99 * r);
            int ig = int(255.99 * g);
            int ib = int(255.99 * b);

			std::cout << ir << " " << ig << " " << ib << std::endl;
        }
    }
}
