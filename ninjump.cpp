#include "SBDL.h"

using namespace std;
//******************build texture********************
Texture arr_motin_left[16];
Texture arr_motin_right[16];
Texture arr_run_fox_left_to_right[9];
Texture arr_run_fox_right_to_left[9];
Texture arr_jump_left[5];
Texture arr_jump_right[5];
Texture arr_bird_left[12];
Texture arr_bird_right[12];
Texture background;
Texture left_wall;
Texture right_wall;
Texture laundry;
Texture background_menu;
Texture play;
Texture chi_power;
Texture settings;
Texture back;
Texture dis_able;
Texture music;
Texture sound;
Texture text_producer;
Texture blue_rectangle;
Texture bubble;
Texture Guide;
Texture background_producer;
Texture Letter;
Texture text_play;
Texture text_ch_power;
Texture Shooter_right;
Texture Shooter_left;
Texture number_bubble;
Texture Arrow;
Texture spike_1;
Texture spike_2;
Texture shield;
Texture house_left;
Texture house_right;
Texture text_blue_1;
Texture text_blue_2;
Texture text_blue_3;
Texture text_blue_4;
Texture background_refresh;
Texture replay;
Texture x;
Texture score;
Texture background_pause;
Texture quit;
Font *font_menu;
Font *font_rectangle;
Font *font_socer;
Font *font_score;
Sound *click;
Sound *die_fox;
Sound  *jump_1;
Sound *jump_2;
Sound *hit_bird;
Sound *arrow;
Sound *hit_arrow;
Sound *die;
Music *music_game;
void input()
{

    background = SBDL::loadTexture("assets/background.png");
    background_menu = SBDL::loadTexture("assets/main_menu.png");
    play = SBDL::loadTexture("assets/play.png");
    number_bubble = SBDL::loadTexture("assets/shield_amt_holder.png");
    chi_power = SBDL::loadTexture("assets/chi.png");
    settings = SBDL::loadTexture("assets/new_options.png");
    back = SBDL::loadTexture("assets/TL_backbutton.png");
    music = SBDL::loadTexture("assets/music_btn.png");
    sound = SBDL::loadTexture("assets/sound_btn.png");
    blue_rectangle = SBDL::loadTexture("assets/slot_btn.png");
    bubble = SBDL::loadTexture("assets/shield_button.png");
    Guide = SBDL::loadTexture("assets/tutorial_panel.png");
    Letter = SBDL::loadTexture("assets/blue_scroll.png");
    arr_motin_right[0] = SBDL::loadTexture("assets/motion_right_1.png");
    arr_motin_right[1] = SBDL::loadTexture("assets/motion_right_2.png");
    arr_motin_right[2] = SBDL::loadTexture("assets/motion_right_3.png");
    arr_motin_right[3]= SBDL::loadTexture("assets/motion_right_4.png");
    arr_motin_right[4] = SBDL::loadTexture("assets/motion_right_5.png");
    arr_motin_right[5] = SBDL::loadTexture("assets/motion_right_6.png");
    arr_motin_right[6] = SBDL::loadTexture("assets/motion_right_7.png");
    arr_motin_right[7] = SBDL::loadTexture("assets/motion_right_8.png");
    arr_motin_right[8] = SBDL::loadTexture("assets/motion_right_9.png");
    arr_motin_right[9] = SBDL::loadTexture("assets/motion_right_10.png");
    arr_motin_right[10] = SBDL::loadTexture("assets/motion_right_11.png");
    arr_motin_right[11] = SBDL::loadTexture("assets/motion_right_12.png");
    arr_motin_right[12] = SBDL::loadTexture("assets/motion_right_13.png");
    arr_motin_right[13] = SBDL::loadTexture("assets/motion_right_14.png");
    arr_motin_right[14] = SBDL::loadTexture("assets/motion_right_15.png");
    arr_motin_right[15] = SBDL::loadTexture("assets/motion_right_16.png");
    //
    arr_motin_left[0] = SBDL::loadTexture("assets/motin_1.png");
    arr_motin_left[1] = SBDL::loadTexture("assets/motin_2.png");
    arr_motin_left[2] = SBDL::loadTexture("assets/motin_3.png");
    arr_motin_left[3]= SBDL::loadTexture("assets/motin_4.png");
    arr_motin_left[4] = SBDL::loadTexture("assets/motin_5.png");
    arr_motin_left[5] = SBDL::loadTexture("assets/motin_6.png");
    arr_motin_left[6] = SBDL::loadTexture("assets/motin_7.png");
    arr_motin_left[7] = SBDL::loadTexture("assets/motin_8.png");
    arr_motin_left[8] = SBDL::loadTexture("assets/motin_9.png");
    arr_motin_left[9] = SBDL::loadTexture("assets/motin_10.png");
    arr_motin_left[10] = SBDL::loadTexture("assets/motin_11.png");
    arr_motin_left[11] = SBDL::loadTexture("assets/motin_12.png");
    arr_motin_left[12] = SBDL::loadTexture("assets/motin_13.png");
    arr_motin_left[13] = SBDL::loadTexture("assets/motin_14.png");
    arr_motin_left[14] = SBDL::loadTexture("assets/motin_15.png");
    arr_motin_left[15] = SBDL::loadTexture("assets/motin_16.png");
    //
    arr_bird_left[0] = SBDL::loadTexture("assets/bird_left_1.png");
    arr_bird_left[1] = SBDL::loadTexture("assets/bird_left_2.png");
    arr_bird_left[2] = SBDL::loadTexture("assets/bird_left_3.png");
    arr_bird_left[3] = SBDL::loadTexture("assets/bird_left_4.png");
    arr_bird_left[4] = SBDL::loadTexture("assets/bird_left_5.png");
    arr_bird_left[5] = SBDL::loadTexture("assets/bird_left_6.png");
    arr_bird_left[6] = SBDL::loadTexture("assets/bird_left_7.png");
    arr_bird_left[7] = SBDL::loadTexture("assets/bird_left_8.png");
    arr_bird_left[8] = SBDL::loadTexture("assets/bird_left_9.png");
    arr_bird_left[9] = SBDL::loadTexture("assets/bird_left_10.png");
    arr_bird_left[10] = SBDL::loadTexture("assets/bird_left_11.png");
    arr_bird_left[11] = SBDL::loadTexture("assets/bird_left_12.png");
    //
    arr_bird_right[0] = SBDL::loadTexture("assets/bird_right_1.png");
    arr_bird_right[1] = SBDL::loadTexture("assets/bird_right_2.png");
    arr_bird_right[2] = SBDL::loadTexture("assets/bird_right_3.png");
    arr_bird_right[3] = SBDL::loadTexture("assets/bird_right_4.png");
    arr_bird_right[4] = SBDL::loadTexture("assets/bird_right_5.png");
    arr_bird_right[5] = SBDL::loadTexture("assets/bird_right_6.png");
    arr_bird_right[6] = SBDL::loadTexture("assets/bird_right_7.png");
    arr_bird_right[7] = SBDL::loadTexture("assets/bird_right_8.png");
    arr_bird_right[8] = SBDL::loadTexture("assets/bird_right_9.png");
    arr_bird_right[9] = SBDL::loadTexture("assets/bird_right_10.png");
    arr_bird_right[10] = SBDL::loadTexture("assets/bird_right_11.png");
    arr_bird_right[11] = SBDL::loadTexture("assets/bird_right_12.png");
    //
    arr_jump_left[0] = SBDL::loadTexture("assets/jump_1.png");
    arr_jump_left[1] = SBDL::loadTexture("assets/jump_2.png");
    arr_jump_left[2] = SBDL::loadTexture("assets/jump_3.png");
    arr_jump_left[3] = SBDL::loadTexture("assets/jump_4.png");
    arr_jump_left[4] = SBDL::loadTexture("assets/jump_5.png");
    //
    arr_jump_right[0] = SBDL::loadTexture("assets/jump_right_1.png");
    arr_jump_right[1] = SBDL::loadTexture("assets/jump_right_2.png");
    arr_jump_right[2] = SBDL::loadTexture("assets/jump_right_3.png");
    arr_jump_right[3] = SBDL::loadTexture("assets/jump_right_4.png");
    arr_jump_right[4] = SBDL::loadTexture("assets/jump_right_5.png");
    //
    arr_run_fox_left_to_right[0]=SBDL::loadTexture("assets/fox_1.png");
    arr_run_fox_left_to_right[1]=SBDL::loadTexture("assets/fox_2.png");
    arr_run_fox_left_to_right[2]=SBDL::loadTexture("assets/fox_3.png");
    arr_run_fox_left_to_right[3]=SBDL::loadTexture("assets/fox_4.png");
    arr_run_fox_left_to_right[4]=SBDL::loadTexture("assets/fox_5.png");
    arr_run_fox_left_to_right[5]=SBDL::loadTexture("assets/fox_6.png");
    arr_run_fox_left_to_right[6]=SBDL::loadTexture("assets/fox_7.png");
    arr_run_fox_left_to_right[7]=SBDL::loadTexture("assets/fox_8.png");
    arr_run_fox_left_to_right[8]=SBDL::loadTexture("assets/fox_9.png");
    //
    arr_run_fox_right_to_left[0]=SBDL::loadTexture("assets/fox_2_1.png");
    arr_run_fox_right_to_left[1]=SBDL::loadTexture("assets/fox_2_2.png");
    arr_run_fox_right_to_left[2]=SBDL::loadTexture("assets/fox_2_3.png");
    arr_run_fox_right_to_left[3]=SBDL::loadTexture("assets/fox_2_4.png");
    arr_run_fox_right_to_left[4]=SBDL::loadTexture("assets/fox_2_5.png");
    arr_run_fox_right_to_left[5]=SBDL::loadTexture("assets/fox_2_6.png");
    arr_run_fox_right_to_left[6]=SBDL::loadTexture("assets/fox_2_7.png");
    arr_run_fox_right_to_left[7]=SBDL::loadTexture("assets/fox_2_8.png");
    arr_run_fox_right_to_left[8]=SBDL::loadTexture("assets/fox_2_9.png");

    //
    dis_able = SBDL::loadTexture("assets/off_slash.png");
    background_producer = SBDL::loadTexture("assets/back_ninja.png");
    Guide = SBDL::loadTexture("assets/tutorial_panel.png");
    house_right = SBDL::loadTexture("assets/house_right.png");
    house_left = SBDL::loadTexture("assets/house.png");
    shield = SBDL::loadTexture("assets/shield.png");
    quit = SBDL::loadTexture("assets/QUITBTN.png");
    spike_1= SBDL::loadTexture("assets/spike_left.png");
    spike_2= SBDL::loadTexture("assets/spike_right.png");
    Arrow= SBDL::loadTexture("assets/3.png");
    Shooter_right = SBDL::loadTexture("assets/shooter_right.png");
    Shooter_left = SBDL::loadTexture("assets/thrower.png");
    laundry = SBDL::loadTexture("assets/laundry.png");
    replay = SBDL::loadTexture("assets/Replay.png");
    left_wall = SBDL::loadTexture("assets/left_wall.png");
    x = SBDL::loadTexture("assets/x_btn.png");
    right_wall = SBDL::loadTexture("assets/right_wall.png");
    background_refresh = SBDL::loadTexture("assets/background2.png");
    background_pause = SBDL::loadTexture("assets/background_pause.png");
    //
    font_score = SBDL::loadFont("assets/Good Eatin AOE.ttf",30);
    font_menu = SBDL::loadFont("assets/Good Eatin AOE.ttf",60);
    font_rectangle = SBDL::loadFont("assets/Good Eatin AOE.ttf",30);
    font_socer = SBDL::loadFont("assets/gobold.ttf",30);


    //
    click = SBDL::loadSound("assets/click2.wav");
    jump_1 = SBDL::loadSound("assets/jump_7.wav");
    jump_2 = SBDL::loadSound("assets/jump_4.wav");
    hit_bird = SBDL::loadSound("assets/hit_bird_2.wav");
    die_fox = SBDL::loadSound("assets/die_fox.wav");
    arrow = SBDL::loadSound("assets/throw_1.wav");
    hit_arrow = SBDL::loadSound("assets/hit_star_3.wav");
    die = SBDL::loadSound("assets/die.wav");
    music_game = SBDL::loadMusic("assets/music.mp3");
}


//*******************build array for show state of every things that there are in the game***********************
bool stat_arr_right_wall[3000];
bool stat_arr_left_wall[3000];
bool state_arr_fox[500];
bool state_arr_laundry[500];
bool state_arr_Shooter[500];
bool state_Arrow[700];
bool state_second_Arrow[700];
bool state_spike[500];
bool state_shield[500];
bool state_house[500];
bool state_birds[500];
bool state_Collision_birds[500];
bool state_Collision_Arrow[700];
bool state_Collision_second_Arrow[700];
bool state_Collision_fox[500];
bool play_sound_bird[500];
bool play_sound_fox[500];
bool play_sound_arrow[500];
bool play_sound_hit_arrow[500];




//*****************************build array of rectangles*******************************************************
//*****************************build rectangle for right and left wall*****************************************
SDL_Rect arr_right_wall[3000];
SDL_Rect arr_left_wall[3000];
//********************************** build rectangle for laundry************************************************
SDL_Rect rect_laundry[500];
//******************build rectangle for fox********************
SDL_Rect rect_fox[500];
//****************************build rectangle for Shooter*******************************************************
SDL_Rect rect_Shooter[700];
//****************************build rectangls for Arrow*********************************************************
SDL_Rect rect_Arrow[700];
SDL_Rect rect_second_Arrow[700];
//****************************build rectangls for spike**********************************************************
SDL_Rect rect_spike[500];
//******************************build rectangls for shield*******************************************************
SDL_Rect rect_shield[500];
//********************************build rectangle for house******************************************************
SDL_Rect rect_house[500];
//********************************build rectangle for birds******************************************************
SDL_Rect rect_birds[500];
//***************************************************************************************************************
int state;
int state_run;//Indicates the status of the game
int state_runing_fox;
int number_player;//baraie in ke bazikon ma roye divar chap harekat konad
int number_fox;
int number_jump_left;
int number_jump_right;
int number_birds;
int state_sound_die;
int angle;
int score_int;


//******************build rectangles*********************
SDL_Rect rect_background;
SDL_Rect rect_right_wall;
SDL_Rect rect_left_wall;
SDL_Rect rect_motin_left;
SDL_Rect rect_motin_right;
SDL_Rect rect_jump;
SDL_Rect rect_background_menu;
SDL_Rect rect_play;
SDL_Rect rect_ch_power;
SDL_Rect rect_settings;
SDL_Rect rect_text_play;
SDL_Rect rect_text_ch_power;
SDL_Rect rect_Letter;
SDL_Rect rect_back;
SDL_Rect rect_control_music;
SDL_Rect rect_control_sound;
SDL_Rect rect_bubble;
SDL_Rect rect_text_number_bubble;
SDL_Rect blue_rectangl_1;
SDL_Rect blue_rectangl_2;
SDL_Rect blue_rectangl_3;
SDL_Rect blue_rectangl_4;
SDL_Rect blue_text_rectangl_1;
SDL_Rect blue_text_rectangl_2;
SDL_Rect blue_text_rectangl_3;
SDL_Rect blue_text_rectangl_4;
SDL_Rect rect_guide;
SDL_Rect rect_producer;
SDL_Rect rect_background_refresh;
SDL_Rect rect_replay;
SDL_Rect rect_x;
SDL_Rect rect_score;
SDL_Rect shield_score;
SDL_Rect rect_background_pause;
SDL_Rect rect_play_in_pause;
SDL_Rect rect_quit;

void variables()
{
    state=0;
    state_run=0;//Indicates the status of the game
    state_runing_fox=0;
    number_player=0;//baraie in ke bazikon ma roye divar chap harekat konad
    number_fox=0;
    number_jump_left=0;
    number_jump_right=0;
    number_birds=0;
    state_sound_die=0;
    angle=0;
    score_int = 0;


    //*************************


    rect_background = {0, 0, 400, 700};
    rect_right_wall = {370, 0, 30, 700};
    rect_left_wall = {0, 0, 30, 700};
    rect_motin_left = {13, 500, 40, 40};
    rect_motin_right = {345, 500, 40, 40};
    rect_jump = {30, 500, 60, 65};
    rect_background_menu ={0,0,400,700};
    rect_play={85,410,250,110};
    rect_ch_power={105,530,210,90};
    rect_settings={355,350,40,40};
    rect_text_play={130,445,110,40};
    rect_text_ch_power={135,560,100,35};
    rect_Letter = {50,120,300,500};
    rect_back ={0,0,40,40};
    rect_control_music={120,240,60,60};
    rect_control_sound={220,240,60,60};
    rect_bubble={170,300,60,60};
    rect_text_number_bubble={213,340,5,10};
    blue_rectangl_1={127,370,150,32};
    blue_rectangl_2={127,405,150,32};
    blue_rectangl_3={127,440,150,32};
    blue_rectangl_4={127,475,150,32};
    blue_text_rectangl_1={140,377,120,25};
    blue_text_rectangl_2={140,412,120,25};
    blue_text_rectangl_3={140,447,120,25};
    blue_text_rectangl_4={140,480,120,25};
    rect_guide ={0,0,400,700};
    rect_producer = {50,90,300,80};
    rect_background_refresh = {0,0,400,700};
    rect_replay = {250,485,82,110};
    rect_x = {310,142,40,40};
    rect_score = {183,31,30,50};
    shield_score = {158,10,80,80};
    rect_background_pause = {0,0,400,700};
    rect_play_in_pause = {150,160,110,150};
    rect_quit = {147,455,110,60};


    //****************************************************
    for(int i=0;i<3000;i++)
    {
        stat_arr_right_wall[i]=true;
    }
    for(int i=0;i<3000;i++)
    {
        stat_arr_left_wall[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_arr_fox[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_arr_laundry[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_arr_Shooter[i]=true;
    }
    for(int i=0;i<700;i++)
    {
        state_Arrow[i]=true;
    }
    for(int i=0;i<700;i++)
    {
        state_second_Arrow[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_spike[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_shield[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_house[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_birds[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        state_Collision_birds[i]=false;
    }
    for(int i=0;i<700;i++)
    {
        state_Collision_Arrow[i]=false;
    }
    for(int i=0;i<700;i++)
    {
        state_Collision_second_Arrow[i]=false;
    }
    for(int i=0;i<500;i++)
    {
        state_Collision_fox[i]=false;
    }
    for(int i=0;i<500;i++)
    {
        play_sound_bird[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        play_sound_fox[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        play_sound_arrow[i]=true;
    }
    for(int i=0;i<500;i++)
    {
        play_sound_hit_arrow[i]=true;
    }
    for(int i=0;i<3000;i++)
    {
        arr_right_wall[i]={380,700-(i*80),40,80};
    }
    for(int i=0;i<3000;i++)
    {
        arr_left_wall[i]={-20,700-(i*80),40,80};
    }
    for (int i = 0; i < 500; i++)
    {
        rect_laundry[i]={15,700-(i*500),380,40};

    }
    for(int i=0;i<500;i+=5)
    {
        rect_laundry[i]={15,700-(i*2500),380,40};
    }
    for(int i=0;i<500;i+=2)
    {
        rect_laundry[i]={15,700-(i*900),380,40};
    }
    for (int i = 0; i < 500; i++)
    {
        rect_fox[i]={15,685-(i*500),50,25};

    }
    for(int i=0;i<500;i+=5)
    {
        rect_fox[i]={15,685-(i*2500),50,25};
    }
    for(int i=0;i<500;i+=2)
    {
        rect_fox[i]={15,685-(i*900),50,25};
    }
    for(int i=0;i<700;i+=2)
    {
        rect_Shooter[i]={350,1000-(i*870),40,40};
    }
    for(int i=1;i<700;i+=2)
    {
        rect_Shooter[i]={10,1000-(i*870),40,40};
    }
    for(int i=0;i<700;i+=2)
    {
        rect_Arrow[i]={340,1000-(i*870),16,16};
    }
    for(int i=1;i<700;i+=2)
    {
        rect_second_Arrow[i]={30,1000-(i*870),16,16};
    }
    for(int i=1;i<700;i+=2)
    {
        rect_Arrow[i]={30,1000-(i*870),16,16};
    }
    for(int i=0;i<500;i+=2)
    {
        rect_spike[i]={20,650-(i*10000),40,70};
    }
    for(int i=1;i<500;i+=2)
    {
        rect_spike[i]={350,400-(i*10000),40,70};
    }
    for(int i=0;i<500;i+=2)
    {
        rect_shield[i]={20,700-(i*6000),50,50};
    }
    for(int i=1;i<500;i+=2)
    {
        rect_shield[i]={330,700-(i*6000),50,50};
    }
    for(int i=0;i<500;i+=2)
    {
        rect_house[i]={15,1000-(i*7000),60,40};
    }
    for(int i=1;i<500;i+=2)
    {
        rect_house[i]={330,1000-(i*7000),60,40};
    }
    for(int i=0;i<500;i+=2)
    {
        rect_birds[i]={20,-i*1400,50,50};
    }
    for(int i=1;i<500;i+=2)
    {
        rect_birds[i]={320,-i*1400,50,50};
    }
}
int main(int argc, char *argv[])
{
    const int window_width = 400;
    const int window_height = 700;
    SBDL::InitEngine("SBDL Test", window_width, window_height);
    input();
    variables();
    int state_sound=0;
    int state_music=0;
    const int FPS = 60; //frame per second
    const int delay = 1000 / FPS; //delay we need at each frame

    //*****************texture of text*********************************************
    text_play =SBDL::createFontTexture(font_menu,"PLAY",255,255,255);
    text_ch_power = SBDL::createFontTexture(font_menu,"Chi Power",255,255,255);
    text_blue_1 = SBDL::createFontTexture(font_rectangle,"Tutorial",255,255,255);
    text_blue_2 = SBDL::createFontTexture(font_rectangle,"Producer",255,255,255);
    text_blue_3 = SBDL::createFontTexture(font_rectangle,"Restore Purchases",255,255,255);
    text_blue_4 = SBDL::createFontTexture(font_rectangle,"Remove Ads",255,255,255);
    text_producer = SBDL::createFontTexture(font_socer,"Producer : Mahdi Mahdavi",0,0,0);


    SBDL::playMusic(music_game,-1);
    while (SBDL::isRunning()) {
        int startTime = SBDL::getTime();
        SBDL::updateEvents();
        SBDL::clearRenderScreen();
        if(state==1)
        {
            score = SBDL::createFontTexture(font_score,"" +to_string(score_int),255,255,255);//for show score
            if(state_music%2==1)
            {
                SBDL::stopMusic();
            }
            if(state_sound%2==1)
            {
                SBDL::stopAllSounds();
            }
            SBDL::showTexture(background, rect_background);
            SBDL::showTexture(shield,shield_score);
            SBDL::showTexture(score,rect_score);
            //*********************show house*********************************
            for(int i = 0;i<500;i++)
            {
                if(rect_house[i].y>=-100 && rect_house[i].y<=700)
                {
                    state_house[i]=true;
                }
                else
                {
                    state_house[i]=false;
                }
                if(SBDL::hasIntersectionRect(rect_jump,rect_house[i]))
                {
                    if(rect_jump.x>=365 ||rect_jump.x<=30)
                        state=6;
                }
                if(state_house[i]==true)
                {
                    if(i%2==0)
                        SBDL::showTexture(house_left,rect_house[i]);
                    else
                        SBDL::showTexture(house_right,rect_house[i]);
                }
            }
            for(int i=0;i<500;i++)
            {
                rect_house[i].y+=7;
            }
            if(state_run==0)
            {
                SBDL::showTexture(arr_motin_left[number_player], rect_motin_left);
                if (number_player == 15) {
                    number_player = 0;
                }
                if (number_player < 15)
                {
                    number_player++;
                }
                if(SBDL::keyPressed(SDL_SCANCODE_SPACE))
                {
                    SBDL::playSound(jump_1,1);
                    number_player =0;
                    state_run=1;
                }

            }
            else if(state_run==1)
            {
                SBDL::showTexture(arr_jump_left[number_jump_left],rect_jump);
                rect_jump.x+=20;
                if(number_jump_left==4)
                {
                    number_jump_left=0;
                }
                if(number_jump_left<4)
                {
                    number_jump_left++;
                }
                if(rect_jump.x>=330)
                {
                    number_jump_left=0;
                    rect_jump.x=350;
                    state_run=2;
                }

            }
            else if(state_run==2)
            {
                SBDL::showTexture(arr_motin_right[number_player],rect_motin_right);
                if (number_player == 15) {
                    number_player = 0;
                }
                if (number_player < 15)
                {
                    number_player++;
                }
                if(SBDL::keyPressed(SDL_SCANCODE_SPACE))
                {
                    SBDL::playSound(jump_2,1);
                    number_player =0;
                    number_jump_left=0;
                    state_run=4;
                }
            }
            else if(state_run==4)
            {
                SBDL::showTexture(arr_jump_right[number_jump_right],rect_jump);
                rect_jump.x-=20;
                if(number_jump_right==4)
                {
                    number_jump_right=0;
                }
                if(number_jump_right<4)
                {
                    number_jump_right++;
                }
                if(rect_jump.x<=40)
                {
                    number_jump_right=0;
                    rect_jump.x=40;
                    state_run=0;
                }
            }

            //******************************for running fox***********************************
            for (int i = 0; i < 500; i++)
            {
                if (rect_fox[i].y < 700 && rect_fox[i].y > -100)
                {
                    if(state_Collision_fox[i]==false)
                        state_arr_fox[i] = true;
                    else
                        state_arr_fox[i]=false;
                }
                if (rect_fox[i].y >= 700 || rect_fox[i].y <= -100)
                {
                    state_arr_fox[i] = false;
                }
                if(SBDL::hasIntersectionRect(rect_fox[i],rect_jump))
                {
                    state_Collision_fox[i] = true;
                    if(play_sound_fox[i]==true)
                    {
                        SBDL::playSound(die_fox,1);
                        play_sound_fox[i]=false;
                        score_int++;
                    }
                }

                if(state_runing_fox==0)
                {
                    if (state_arr_fox[i] == true && (i % 2 != 0))
                    {
                        SBDL::showTexture(arr_run_fox_left_to_right[number_fox], rect_fox[i]);
                    }
                }
                else if(state_runing_fox==1)
                {
                    if(state_arr_fox[i] == true && (i % 2 != 0))
                    {
                        SBDL::showTexture(arr_run_fox_right_to_left[number_fox], rect_fox[i]);
                    }
                }
                if(rect_fox[i].x>=335)
                {
                    state_runing_fox=1;
                    number_fox=0;
                }
                else if(rect_fox[i].x<=20)
                {
                    state_runing_fox=0;
                    number_fox=0;
                }
            }

            if (number_fox == 8) {
                number_fox = 0;
            }
            if (number_fox < 8) {
                number_fox++;
            }
            for (int i = 0; i < 500; i++) {
                rect_fox[i].y += 7;
            }
            if(state_runing_fox==0) {
                for (int i = 0; i < 500; i++) {

                    rect_fox[i].x += 4;
                }
            }
            else{
                for (int i = 0; i < 500; i++) {

                    rect_fox[i].x -= 4;
                }

            }

            //***************************************for show Shooter and Arrow***********************
            {
                for (int i = 0; i < 700; i++) {
                    if (rect_Shooter[i].y < 700 && rect_Shooter[i].y >= -100) {
                        state_arr_Shooter[i] = true;
                    }
                    if (rect_Shooter[i].y >= 700 || rect_Shooter[i].y <= -100) {
                        state_arr_Shooter[i] = false;
                    }
                    if (SBDL::hasIntersectionRect(rect_jump, rect_Shooter[i])) {
                        if (rect_jump.x >= 330 || rect_jump.x <= 40)
                        {
                            state = 6;
                        }
                        if (SBDL::hasIntersectionRect(rect_motin_left, rect_Shooter[i]))
                        {
                            state = 6;
                        }
                        if (SBDL::hasIntersectionRect(rect_motin_left, rect_Shooter[i]))
                        {
                            state = 6;
                        }
                    }
                    //show second Arrow
                    {
                        if (rect_second_Arrow[i].y <= 700 && rect_second_Arrow[i].y >= 80) {
                            if (state_Collision_second_Arrow[i] == false)
                                state_second_Arrow[i] = true;
                            else
                                state_second_Arrow[i] = false;
                        } else if (rect_second_Arrow[i].x >= 400 || rect_second_Arrow[i].x <= 0) {
                            state_second_Arrow[i] = false;
                        } else {
                            state_second_Arrow[i] = false;
                        }
                        if (SBDL::hasIntersectionRect(rect_second_Arrow[i], rect_jump)) {
                            state_Collision_second_Arrow[i] = true;
                        }
                        if (state_second_Arrow[i] == true) {
                            SBDL::showTexture(Arrow, angle += 27, rect_second_Arrow[i]);
                            rect_second_Arrow[i].x += 7;
                            rect_second_Arrow[i].y -= 3;
                        }
                    }
                    //end of show second Arrow
                    if (state_arr_Shooter[i] == true) {
                        if (i % 2 == 0) {
                            SBDL::showTexture(Shooter_right, rect_Shooter[i]);
                        } else {
                            SBDL::showTexture(Shooter_left, rect_Shooter[i]);
                        }
                    }
                    if(rect_Arrow[i].y <=700 && rect_Arrow[i].y >=80)
                    {
                        if(state_Collision_Arrow[i]==false)
                            state_Arrow[i]=true;
                        else
                            state_Arrow[i]=false;
                    }

                    else if(rect_Arrow[i].x>=400 || rect_Arrow[i].x<=0)
                    {
                        state_Arrow[i]=false;
                    }
                    else
                    {
                        state_Arrow[i]=false;
                    }
                    if(SBDL::hasIntersectionRect(rect_Arrow[i],rect_jump))
                    {
                        state_Collision_Arrow[i]=true;
                        if(play_sound_hit_arrow[i]==true)
                        {
                            SBDL::playSound(hit_arrow,1);
                            play_sound_hit_arrow[i] = false;
                            score_int++;
                        }

                    }
                    if(state_Arrow[i]==true)
                    {
                        if (i % 2 == 0)
                        {
                            SBDL::showTexture(Arrow, angle += 27, rect_Arrow[i]);
                            if(play_sound_arrow[i]==true)
                            {
                                SBDL::playSound(arrow,1);
                                play_sound_arrow[i]=false;
                            }
                            rect_Arrow[i].x -= 6.5;
                            rect_Arrow[i].y += 6;
                        }
                        else
                        {
                            SBDL::showTexture(Arrow, angle += 27, rect_Arrow[i]);
                            if(play_sound_arrow[i]==true)
                            {
                                SBDL::playSound(arrow,1);
                                play_sound_arrow[i]=false;
                            }
                            rect_Arrow[i].x += 7;
                            rect_Arrow[i].y += 3;
                        }
                    }
                }
                for (int i = 0; i < 700; i++) {
                    rect_Shooter[i].y += 7;
                }
                for (int i = 0; i < 700; i++) {
                    rect_Arrow[i].y += 7;
                }
                for (int i = 0; i < 700; i++) {
                    rect_second_Arrow[i].y += 7;
                }

            }
            //**********show laundry***********************
            for (int i = 0; i < 500; i++)
            {
                SBDL::showTexture(laundry, rect_laundry[i]);
            }
            for (int i = 0; i < 500; i++)
            {
                rect_laundry[i].y += 7;
            }
            /////*********************wall********************
            for (int i = 0; i < 3000; i++)
            {
                if (arr_right_wall[i].y >= 700)
                {
                    stat_arr_right_wall[i] = false;
                }
                if (stat_arr_right_wall[i] == true)
                {
                    SBDL::showTexture(right_wall, arr_right_wall[i]);
                }
            }
            for (int j = 0; j < 3000; j++)
            {
                arr_right_wall[j].y += 7;
            }
            for (int i = 0; i < 3000; i++)
            {
                if (arr_left_wall[i].y >= 700)
                {
                    stat_arr_left_wall[i] = false;
                }
                if (stat_arr_left_wall[i] == true)
                {
                    SBDL::showTexture(left_wall, arr_left_wall[i]);
                }
            }
            for (int j = 0; j < 3000; j++)
            {
                arr_left_wall[j].y += 7;
            }
            //***************************show spike****************************
            for(int i=0;i<500;i++)
            {
                if(rect_spike[i].y>=-100 && rect_spike[i].y<=700)
                {
                    state_spike[i]=true;
                } else
                {
                    state_spike[i]=false;
                }
                if(SBDL::hasIntersectionRect(rect_jump,rect_spike[i]))
                {
                    if(rect_jump.x>=340 ||rect_jump.x<=30)
                        state=6;
                }
                if(state_spike[i]==true)
                {
                    if(i%2==0)
                    {
                        SBDL::showTexture(spike_1,rect_spike[i]);
                    } else
                    {
                        SBDL::showTexture(spike_2,rect_spike[i]);
                    }
                }
            }
            for(int i=0;i<500;i++)
            {
                rect_spike[i].y+=7;
            }
            //*********************show shiled***************************
            for(int i=0;i<500;i++)
            {

                if(rect_shield[i].y>=-100 && rect_shield[i].y<=700)
                {
                    state_shield[i]=true;
                } else
                {
                    state_shield[i]=false;
                }
                if(state_shield[i]==true)
                {
                    SBDL::showTexture(shield,rect_shield[i]);
                }
            }
            for(int i=0;i<500;i++)
            {
                rect_shield[i].y+=7;
            }
            //****************************show birds**************************************
            for(int i=0;i<500;i++)
            {
                if(rect_birds[i].y>=-100 && rect_birds[i].y<=700)
                {
                    if(state_Collision_birds[i]==false)
                        state_birds[i]=true;
                    else
                        state_birds[i]=false;
                }
                else if(rect_birds[i].x>=400 || rect_birds[i].x<=0)
                {
                    state_birds[i]=false;
                }
                else
                {
                    state_birds[i]=false;
                }

                if(SBDL::hasIntersectionRect(rect_birds[i],rect_jump))
                {
                    state_Collision_birds[i]=true;
                    if(play_sound_bird[i] == true)
                    {
                        SBDL::playSound(hit_bird,1);
                        play_sound_bird[i]=false;
                        score_int++;

                    }
                }
                if(state_birds[i]==true)
                {
                    if(i%2==0)
                    {
                        SBDL::showTexture(arr_bird_left[number_birds],rect_birds[i]);
                        if(rect_birds[i].y>=120)
                        {
                            rect_birds[i].x+=7;
                            rect_birds[i].y+=2;
                        }
                    }
                    else
                    {
                        SBDL::showTexture(arr_bird_right[number_birds],rect_birds[i]);
                        if(rect_birds[i].y>=120)
                        {
                            rect_birds[i].x-=7;
                            rect_birds[i].y+=2;
                        }
                    }
                }
            }
            for(int i=0;i<500;i++)
            {
                rect_birds[i].y+=7;
            }
            if(number_birds==11)
            {
                number_birds=0;
            }
            if(number_birds<11)
            {
                number_birds++;
            }
            if(SBDL::keyPressed(SDL_SCANCODE_P))
            {
                SBDL::playSound(click,1);
                state = 7;
            }
        }
        else if(state==0)
        {
            if(state_music%2==1)
            {
                SBDL::stopMusic();
            }
            if(state_sound%2==1)
            {
                SBDL::stopAllSounds();
            }
            SBDL::showTexture(background_menu,rect_background_menu);
            SBDL::showTexture(play,-5,rect_play);
            SBDL::showTexture(chi_power,rect_ch_power);
            SBDL::showTexture(settings,rect_settings);
            SBDL::showTexture(text_play,-8,rect_text_play);
            SBDL::showTexture(text_ch_power,0,rect_text_ch_power);
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_play)) {
                    state = 1;
                    SBDL::playSound(click,1);
                }
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_settings)) {
                    state = 3;
                    SBDL::playSound(click,1);
                }


            }

        }
        else if(state==3)
        {
            SBDL::showTexture(background_menu,rect_background_menu);
            SBDL::showTexture(Letter,rect_Letter);
            SBDL::showTexture(back,rect_back);
            SBDL::showTexture(music,rect_control_music);
            SBDL::showTexture(sound,rect_control_sound);
            SBDL::showTexture(bubble,rect_bubble);
            SBDL::showTexture(blue_rectangle,blue_rectangl_1);
            SBDL::showTexture(blue_rectangle,blue_rectangl_2);
            SBDL::showTexture(blue_rectangle,blue_rectangl_3);
            SBDL::showTexture(blue_rectangle,blue_rectangl_4);
            SBDL::showTexture(text_blue_1,blue_text_rectangl_1);
            SBDL::showTexture(text_blue_2,blue_text_rectangl_2);
            SBDL::showTexture(text_blue_3,blue_text_rectangl_3);
            SBDL::showTexture(text_blue_4,blue_text_rectangl_4);
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_control_music))
                {
                    state_music++;
                    SBDL::playSound(click,1);
                }
            }
            if(state_music%2==1)
            {
                state_music++;
                SBDL::showTexture(dis_able,rect_control_music);

            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_control_sound))
                {
                    state_sound++;
                    SBDL::playSound(click,1);
                }
            }
            if(state_sound%2==1)
            {
                SBDL::stopAllSounds();
                SBDL::showTexture(dis_able,rect_control_sound);
            }
            if(state_music%2==1)
            {
                //SBDL::stopMusic();
                SBDL::showTexture(dis_able,rect_control_music);
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(blue_rectangl_1)) {
                    state = 4;
                    SBDL::playSound(click,1);
                }
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_back)) {
                    state = 0;
                    SBDL::playSound(click,1);
                }
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(blue_rectangl_2)) {
                    state = 5;
                    SBDL::playSound(click,1);
                }
            }

        }
        else if(state==4)
        {
            SBDL::showTexture(Guide,rect_guide);
            SBDL::showTexture(back,rect_back);
            if(state_music%2==1)
            {
                SBDL::stopMusic();
            }
            if(state_sound%2==1)
            {
                SBDL::stopAllSounds();
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_back)) {
                    state = 3;
                    SBDL::playSound(click,1);
                }
            }
        }
        else if(state==5)
        {
            SBDL::showTexture(background_producer,rect_background);
            SBDL::showTexture(text_producer,rect_producer);
            SBDL::showTexture(back,rect_back);
            if(state_music%2==1)
            {
                SBDL::stopMusic();
            }
            if(state_sound%2==1)
            {
                SBDL::stopAllSounds();
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_back)) {
                    state = 3;
                    SBDL::playSound(click,1);
                }
            }
        }
        else if(state==6)
        {
            if(state_music%2==1)
            {
                SBDL::stopMusic();
            }
            if(state_sound%2==1)
            {
                SBDL::stopAllSounds();
            }
            if(state_sound_die==0)
            {
                SBDL::playSound(die,1);
                state_sound_die=1;
            }
            SBDL::showTexture(background_refresh,rect_background_refresh);
            SBDL::showTexture(x,20,rect_x);
            SBDL::showTexture(replay,rect_replay);
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_replay))
                {
                    variables();
                    state = 1;
                    SBDL::playSound(click,1);
                }
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_x))
                {
                    variables();
                    state = 0;
                    SBDL::playSound(click,1);
                }
            }

        }
        else if(state == 7)
        {
            SBDL::showTexture(background_pause,rect_background_pause);
            SBDL::showTexture(replay,rect_play_in_pause);
            SBDL::showTexture(quit,rect_quit);
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_play_in_pause))
                {
                    SBDL::playSound(click,1);
                    state =1;
                }
            }
            if(SBDL::Mouse.clicked())
            {
                if (SBDL::mouseInRect(rect_quit))
                {
                    variables();
                    SBDL::playSound(click,1);
                    state =0;
                }
            }
        }

        SBDL::updateRenderScreen();
        SBDL::delay(30);

    }
}
