#include <stdio.h>

int main() {
    int mainRoad = 0;
    int highway1 = 0;
    int cityStreet = 0;

    int roadData[] = {1, 2, 1, 3, 2, 1, 3, 3};
    int vehicleData[] = {5, 3, 2, 4, 1, 3, 2, 2};

    int n = 8;  

    for (int i = 0; i < n; i++) {
        int road = roadData[i];
        int vehicles = vehicleData[i];

        if (road == 1) {
            mainRoad += vehicles;
        } else if (road == 2) {
            highway1 += vehicles;
        } else if (road == 3) {
            cityStreet += vehicles;
        }
    }

    printf("Traffic Summary:\n");
    printf("Main Road: %d vehicles\n", mainRoad);
    printf("Highway 1: %d vehicles\n", highway1);
    printf("City Street: %d vehicles\n", cityStreet);

    return 0;
}
