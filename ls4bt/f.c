#include <stdio.h>

int MP, HP;


int castSpell(int mp_cost, int *hp_drain){
    if (mp_cost > MP){
        printf("FAILED\n");
        return 0;
    }
    else {
        *hp_drain = mp_cost / 10;
        MP -= mp_cost;
        HP -= *hp_drain;
        if (HP < 0) {
            HP = 0;
            printf("SUCCESS %d %d\n", HP, MP);
            return 1;
        }
        printf("SUCCESS %d %d\n", HP, MP);
        return 0;
    }

}

int main (){
    int Q;
    scanf("%d %d %d", &HP, &MP, &Q);

    for (int i = 0; i < Q; i++){
        int hp_drain = 0;
        int mp_cost;
        scanf("%d", &mp_cost);
        castSpell(mp_cost, &hp_drain);

    }
}