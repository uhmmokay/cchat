<h1> Cchat v2 - Cryptcat Assistant for GNU/Linux Distributions</h1>

### Rejoice - you no longer have to struggle with flags to get cryptcat working properly in your terminal!
### Here is an open-source assistant written in C++ for high performance. 

<h1>Installation</h1>

```
git clone https://github.com/uhmmokay/cchat.git && cd ./cchat
g++ ./main.cpp ./cchat.cpp -o cchat

```

<h1>Warning! </h1> 

### This is NOT completed program. Functionality will be expanded in the future.

<h1> So, what exactly is this program? </h1>

### It solves the problem of users having to enter flags to use cryptcat.

### Currently, the program implements only two functions: 

<ol>
    <li><h3>Connection to the server for communication</h3></li>
    <li><h3>Creating the server for communication</h3></li>
</ol>

<h1> What is your creation doing? </h1>

### At the beginning, the program will output:

```

Hello! This is a 'cchat'. 
You can get more documentation on 'https://github.com/uhmmokay/cchat'.
This program uses 'cryptcat'
Please choose what you want to do: 
1) Create local server for chatting.
2) Connect to another server for chatting.

```

### If you select 1, the program will ask you to choose a port and a password for your room.

### If you select 2, the programm will ask you to write an ip, password and port of your target server.

### If you want to share your server with someone else after creating it, simply provide the IP address and the port you specified during setup.

# License?

### GNU Affero General Public License V3