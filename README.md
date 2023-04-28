# GetNextLine : A copy of the getline() function in C 

## 42 Silicon Valley
This project was done at a free coding school called '42 Silicon Valley', which was unfortunately shut down permanently after the 2020 pandemic. It originally started in france, this is the [french '42' school's website](https://42.fr/en/homepage/). The US 42 schools website was shutdown but their [old instagram](https://www.instagram.com/42siliconvalley/?hl=en) is still up if you are curious what the school was about.

#### How did this coding school work?
At 42 you were not allowed to use almost any libraries whatsoever. You had to build everything from scratch. 42 had no in-person instructors, it was a self taught school.

## Description 

To see the school's project instructions read the [PDF Instructions](https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/get_next_line.pdf). To see my logic, see the [Logic Flow Chart](https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/Get_next_line_FLOWCHART.pdf).

### What is getnextline? 
 The program has the same functionality of 'getline' from the stdio library in C. I coded this from scratch (no googling to cheat, beyond syntactic & symantic errors) to exercise my logic. It reads in a file line by line into a buffer, until the entire file is read. 


<table><tr><td valign="top" width="50%">



### Check if the input is valid  
The first thing we need to do, is make sure the arguments are valid. If the file descriptor is not valid, or the line pointer (the pointer that points to the first line in the file) is null, then we need to give an error message.   


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/Flow_0.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/flow_1.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Read from the file descriptor  
Given a valid input, we can start reading from the specified file descriptor using a **buffer**  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### Did we find the end of the line or file?   
If the size of the memory read is less than the buffer, then we know that we have reached the end of the file. If there is a newline character within the buffer, then we know we have reached the end of the line.   


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/flow_3.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/flow_4.png?raw=true" align="left" style="width: 100%" />  


</td><td valign="top" width="50%">



### Concatenate and split strings, to return one line at a time  
Handle the sub-strings that terminate the line or file  


</td></tr></table>  

<br/>  

<table><tr><td valign="top" width="50%">



### If the file is done reading return True 
  


</td><td valign="top" width="50%">

<img src="https://github.com/wesleyZero/Get_Next_Line_42SiliconValley/blob/main/README_RESOURCES/flow_6.png?raw=true" align="left" style="width: 100%" />  


</td></tr></table>
<br />
