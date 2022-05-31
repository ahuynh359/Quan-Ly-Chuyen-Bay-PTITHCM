﻿#pragma once
#include"graphics.h"
#pragma comment(lib,"graphics.lib")
#ifndef DEFINE_H
#define DEFINE_H

//----------------SCREEN----------
#define SCREEN_WIDTH  1280
#define SCREEN_HEIGHT  700


//-----------------BACKGROUND COLOR
#define BACKGROUND_COLOR COLOR(255, 246, 245)
#define DISABLE_COLOR COLOR(127,124,132) 


//--------------SUBWINDOW---------------
#define SUBWINDOW_LEFT 25  
#define SUBWINDOW_TOP 100
int SUBWINDOW_RIGHT = SCREEN_WIDTH - SUBWINDOW_LEFT;
int SUBWINDOW_BOTTOM = SCREEN_HEIGHT;
#define SUBWINDOW_BACKGROUND COLOR(232,242,247)

//-------------------------TAB --------------------
#define MAX_TAB 5
#define TAB_DEFAULT_BACKGROUND COLOR(241, 208, 215)
#define TAB_ON_SELECTED_BACKGROUND COLOR(167, 206, 225)
char TAB_TEXT[MAX_TAB][30] = {
   "PLANES",
   "FLIGHTS",
   "CUSTOMER",
   "TICKET",
   "STATISTIC"

};
//------------BUTTON-----
#define BUTTON_PAGE COLOR(190, 193, 196)
#define BUTTON_BACKGROUND COLOR(167, 206, 225)
#define BUTTON_TEXT_COLOR COLOR(52, 113, 235)


//--------------BORDER--------
int LEFT_BORDER = SUBWINDOW_LEFT + 100;
int TOP_BORDER = SUBWINDOW_TOP + 50;
int RIGHT_BORDER = SUBWINDOW_RIGHT - 100;
int BOTTOM_BORDER = SUBWINDOW_BOTTOM - 120;


//-----------------PLANE
#define MAX_ID_PLANE 15
#define MAX_PLANE 300
#define MAX_TYPE_PLANE 40
#define MAX_SEAT 300
#define MIN_SEAT 20

//--------------PASSENGER
#define MAX_LAST_NAME 10
#define MAX_FIRST_NAME 50
#define MAX_ID_PASS 12


//--------------FLIGHT

#define MAX_ID_FLIGHT 15
#define MAX_ARRIVE 100
#define MAX_FLIGHT 50
enum STATUS { CANCLE_FLIGHT, HAVE_TICKET, OUT_OF_TICKET, COMPLETE_FLIGHT };



//--------------EDIT TEXT
#define EDITTEXT_WIDTH 500
#define EDITTEXT_HEIGHT 40
#define EDITEXT_TEXT_COLOR COLOR(0, 133, 190)
#define EDITTEXT_TITLE_COLOR COLOR(145, 84, 229)
#define EDITEXT_ON_SELECTED_COLOR COLOR(191, 207, 255)
#define EDITEXT_BACKGROUND_COLOR COLOR(227, 228, 230)
#define EDITEXT_HINT_COLOR COLOR(137, 137, 137)
#define EDITEXT_INPUT_COLOR COLOR(222, 222, 224)
#define EDITTEXT_SPACE 80
#define EDITTEXT_MIN_SPACE 50


//---------------MANAGE PLANE TAB-------------
char PLANE_TITLE[5][20]{
	"NUMBER",
	"PLANE ID",
	"TYPE",
	"SEATS"
};


//---------------MANAGE FLIGHT TAB-------------
char FLIGHT_TITLE[8][20]{
	"Number",
	"ID Flight",
	"ID Plane",
	"Date",
	"Arrive",
	"Status"
	,"Ticket Left"
};

// PASSENGER TAB
char PASS_TITLE[6][20]{
	"Number",
	"Ticket",
	"First Name",
	"Last Name",
	"ID Passenger",
	"Gender"
};

//TICKET TAB
#define TICKET_AVAI COLOR(144,151,155)
#define TICKET_NOT_AVAI COLOR(255,136,136)

// STATICTIS TAB
char STATICITS_TITLE[4][20]{
	"Number",
	"ID Plane",
	"Fly times"
};



//-----ENUM BUTTON EDITTEXT NAME
enum EIDT_NAME { ID_PLANE, ID_FLIGHT, TYPE, SEATS, DAY, MONTH, HOUR, ARRIVE, YEAR, MINUTE, STATUS, FIRST_NAME, LAST_NAME, ID_PASS, GENDER };
enum BUTTON_NAME { ADD, SHOW, LEFT, RIGHT, BACK, SAVE, CLOSE, FIND, TICKET_LEFT_BUTTON, ALL, OUT_OF_TICKET_BUTTON, FEMALE, MALE, SEARCH, CANCLE };
enum MENU { MAIN_MENU, ADD_MENU, ADJUST_MENU, SHOW_MENU, FIND_PLANE_MENU, TICKET_MENU, CANCLE_TICKET_MENU };
enum EDITTEXT_MESS {
	EMPTY, SEAT_ERROR, DUP, SUCCESS, PREVIOUS,
	CANCLE_FLIGHT_ERROR, FLIGHT_IS_DONE, CANCLE_TICKET,
	PLANE_NOT_EXIST, DAY_ERROR, MONTH_ERROR, TIME_ERROR, YEAR_ERROR, MINUTE_ERROR, HOUR_ERROR, GREATER_SEAT, ID_PASS_ERROR,
	GENDER_ERROR, FULL_PLANE,
	REMOVE_CONFIRM, REMOVE_ERROR, ADJUST_ERROR, BEFORE_ONE_HOUR, BEFORE_OLD_TIME, CANCEL_CONFIRM, THIRTY_MINUTE
};
#define MAX_BUTTON 16
#define MAX_EDITTEXT 17
#define PAGE_COLOR COLOR(142, 154, 185)
#define LIMIT_PAGE 30
#define ON_SELECTED_DATA_COLOR COLOR(205, 92, 92)


#endif









