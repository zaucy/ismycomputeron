#ifndef WAIT_MESSAGE_H
#define WAIT_MESSAGE_H

#include <string>
#include <chrono>

/**
 * @brief wait_message - Prints out a message and waits with a little animation. After
 *                       the animation is done the message is cleared.
 * @param msg - The message that gets printed out.
 * @param duration - How long the animation plays.
 */
extern void wait_message(std::string msg, std::chrono::seconds duration);

#endif//WAIT_MESSAGE_H
