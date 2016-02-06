#ifndef STYLESHEET_H
#define STYLESHEET_H
#include<QString>

QString stylesheet = 
"QWidget {"
"	background-color:black;"
"	color: white;"
"}"
"QMenuBar::item:selected {"
"     color: yellow;"
"}"
"QMenuBar::item:pressed {"
"	color: yellow;"
"}"
"QMenu{"
"	border: 1px solid white;"
"}"
"QMenu::item:selected {"
"	color: yellow;"
"}"
"QLineEdit {"
"	border-radius: 0px;"
"	background: lightgray;"
"	color: black;"
"}"
"QGroupBox#BatchInfo{"
"     border: 1px solid red;"
"     border-radius: 0px;"
"	margin-top: 1.5ex; /* leave space at the top for the title */"
"	font: bold;"
"	padding-top: 5px;"
" }"
"QGroupBox::title#BatchInfo {"
"	subcontrol-origin: margin;"
"	left: 30%;"
"	right: 70%;"
"   background-color: red;"
"	color: white;"
" }"
"QGroupBox#RecordInfo{"
"	border: 1px solid yellow;"
"	border-radius: 0px;"
"	margin-top: 1.5ex;"
"	font: bold;"
"	padding-top: 5px;"
"}"
"QGroupBox::title#RecordInfo{"
"	subcontrol-origin: margin;"
"	left: 30%;"
"	right: 70%;"
"}"
"QGroupBox#Vykony{"
"	border: 1px solid yellow;"
"	border-radius: 0px;"
"	margin-top: 1.5ex;"
"	font: bold;"
"	padding-top: 5px;"
"}"
"QGroupBox::title#Vykony{"
"	subcontrol-origin: margin;"
"	left: 30%;"
"	right: 70%;"
"}"
"QPushButton{"
"border: 1px solid white;"
"padding-left: 5px;"
"padding-right: 5px;"
"min-width: 80px;"
"}"
"QProgressBar {"
"     border: 1px solid white;"
"    border-radius: 0px;"
"     text-align: center;"
"}"
"QProgressBar::chunk {"
"     background-color: lightblue;"
"     width: 10px;"
"     margin: 0.5px;"
" }"

" QComboBox {"
"     border: 1px solid white;"
"     padding: 1px 18px 1px 3px;"
"     min-width: 6em;"
" }"

" QComboBox QAbstractItemView {"
"     border: 1px solid white;"
"     selection-background-color: lightblue;"
" }"

;
#endif

