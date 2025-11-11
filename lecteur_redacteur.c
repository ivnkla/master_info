//
//  LectRed.c
//  LectRed
//
//  Created by Vania Marangozova-Martin on 14/11/2017.
//  Copyright © 2017 Vania Marangozova-Martin. All rights reserved.
//
#include "lecteur_redacteur.h"
#include <stdlib.h>

pthread_mutex_t *mutex;
void initialiser_lecteur_redacteur( LR_t * LR ) {LR->mutex = mutex;}
void detruire_lecteur_redacteur( LR_t * LR ) {free(LR);}
void debut_lecture( LR_t * LR ) {pthread_mutex_lock(LR->mutex);}
void fin_lecture( LR_t * LR ){pthread_mutex_unlock(LR->mutex);}
void debut_redaction( LR_t * LR){pthread_mutex_lock(LR->mutex);}
void fin_redaction( LR_t * LR){pthread_mutex_unlock(LR->mutex);}
