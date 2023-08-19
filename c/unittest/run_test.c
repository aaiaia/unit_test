
void config_sequential(void) {
    //config common for sequential
    //insert codes here

    return;
}

void run_sequential(void) {
    return;
}

void config_forever(void) {
    //config common for forever
    //insert codes here

    return;
}

void run_forever(void) {
    //configure specific
    //reserved

    for(;;) {
        //Reserved
    }
    return;
}

void run_test(void) {
    //config for common
    config_sequential();
    //run
    run_sequential();

    //config for common
    config_forever();
    //run
    run_forever();

    return;
}

