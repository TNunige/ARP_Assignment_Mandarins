#ifndef CONSTANTS_H
#define CONSTANTS_H

#define MAX_LEN 100  // Buffer to use during array initialization
// Max number of messages printed on the inspection window (buffer)
#define MAX_MESSAGES 23
#define WAIT_TIME 100000  // time for loops to wait, using usleep()

#define SHM_PATH "/shm_server"  // Shared memory path
#define SEM_PATH "/sem_server"  // Semaphore path

// Defining the keys for movement for ncurses
#define KEY_LEFT_UP 119
#define KEY_LEFT_s 115
#define KEY_LEFT_DOWN 120
#define KEY_UP_e 101
#define KEY_DOWN_c 99
#define KEY_RIGHT_DOWN 118
#define KEY_RIGHT_f 102
#define KEY_RIGHT_UP 114
#define KEY_STOP 100
#define ESCAPE 27    // Exit key
#define RESTART 107  // Restart key

// Constants for the force calculation
#define ETA 10          // Positive scaling factor
#define T 1.0           // Integration interval for 1000 [ms] = 1 [s]
#define M 1.0           // Mass of the drone 1 [kg]
#define K 1.0           // Viscous coefficient [N*s*m]
#define y_direction 1   // Identify force in y direction
#define x_direction 0   // Identify force in x direction
#define Force 1.0       // Force is 1 [N]
#define DRONE_AREA 100  // Geofence dimension [m]
#define FORCE_FIELD 5   // Physical size of the repulsion area [m]

// Defining a struct to hold the data exchanged in shared memory
struct shared_data {
  int ch;         // Key pressed by the user
  double real_y;  // y coordinate of the character
  double real_x;  // x coordinate of the character
};
// Watchdog variables
#define NUM_PROCESSES 4
#define BLACKBOARD_SYM 0
#define KEYBOARD_SYM 1
#define WINDOW_SYM 2
#define DRONE_SYM 3

// Number of process cycles before signaling watchdog
#define PROCESS_SIGNAL_INTERVAL 11
// Time in seconds of process inactivity before watchdog kills all processes
#define PROCESS_TIMEOUT_S 10

// Array for process files for PID sharing
#define PID_FILE_SP \
  { "/tmp/pid_file0", "/tmp/pid_file1", "/tmp/pid_file2", "/tmp/pid_file3" }
#define PID_FILE_PW "/tmp/pid_filew"  // Filename for watchdog process pid
// Names of the process for logfile
#define PROCESS_NAMES \
  { "Blackboard", "Keyboard", "Window", "Drone" }

#endif
