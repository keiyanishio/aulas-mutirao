int process_pixel(int level, int n) {
    int new_level1;
    int new_level2;
    new_level1=level*n;

    if (new_level1>=255){
        new_level2=255;
    }
    else{
        new_level2=new_level1;
    }

    return new_level2;
}
