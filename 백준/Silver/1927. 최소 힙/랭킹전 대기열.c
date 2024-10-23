#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare_names(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    int p, m;
    scanf("%d %d", &p, &m);

    int rooms_level[300][300];    // 방에 속한 플레이어들의 레벨
    char rooms_name[300][300][17];  // 방에 속한 플레이어들의 닉네임
    int room_count[300] = {0};     // 각 방의 플레이어 수
    int room_min_level[300];       // 각 방의 최소 레벨
    int room_max_level[300];       // 각 방의 최대 레벨
    int total_rooms = 0;           // 총 방의 수

    for (int i = 0; i < p; i++) {
        int level;
        char name[17];
        scanf("%d %s", &level, name);

        int found_room = 0;

        // 기존 방에 들어갈 수 있는지 확인
        for (int j = 0; j < total_rooms; j++) {
            if (room_count[j] < m && level >= room_min_level[j] && level <= room_max_level[j]) {
                // 방에 플레이어 추가
                rooms_level[j][room_count[j]] = level;
                strcpy(rooms_name[j][room_count[j]], name);
                room_count[j]++;
                found_room = 1;
                break;
            }
        }

        // 들어갈 수 있는 방이 없으면 새로운 방 생성
        if (!found_room) {
            rooms_level[total_rooms][0] = level;
            strcpy(rooms_name[total_rooms][0], name);
            room_count[total_rooms] = 1;
            room_min_level[total_rooms] = level - 10;
            room_max_level[total_rooms] = level + 10;
            total_rooms++;
        }
    }

    // 각 방 상태 출력
    for (int i = 0; i < total_rooms; i++) {
        // 방이 꽉 찼으면 Started!, 그렇지 않으면 Waiting! 출력
        if (room_count[i] == m) {
            printf("Started!\n");
        } else {
            printf("Waiting!\n");
        }

        // 닉네임을 사전순으로 정렬하기 위해 정렬을 위한 임시 배열 생성
        char temp_names[300][17];
        int temp_levels[300];

        for (int j = 0; j < room_count[i]; j++) {
            strcpy(temp_names[j], rooms_name[i][j]);
            temp_levels[j] = rooms_level[i][j];
        }

        // 이름을 기준으로 정렬
        qsort(temp_names, room_count[i], sizeof(temp_names[0]), compare_names);

        // 정렬된 순서대로 레벨 출력
        for (int j = 0; j < room_count[i]; j++) {
            for (int k = 0; k < room_count[i]; k++) {
                if (strcmp(temp_names[j], rooms_name[i][k]) == 0) {
                    printf("%d %s\n", rooms_level[i][k], rooms_name[i][k]);
                    break;
                }
            }
        }
    }

    return 0;
}
