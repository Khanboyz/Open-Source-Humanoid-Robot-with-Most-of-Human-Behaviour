
#include "MHBHumanoid.h"

MHBHumanoid MHB;

void setup() {

  Serial.begin(115200);
  Serial.println("GPIO test!");
  delay(2000);
  MHB.init_hash();
  MHB.initial_position();
  delay(2000);
}

void loop() {

  MHB.bink_eye(2);
  delay(1000);
  MHB.say_hi(2);
  delay(1000);
  MHB.my_name_hash_jr();
  delay(1000);
  MHB.say_yes();
  MHB.i_am_mini_robot();
  delay(1000);
  MHB.controlled_by_esp32();
  delay(1000);
  MHB.i_can_do_facial_exp();
  delay(1000);
  MHB.do_happy_face();
  delay(1000);
  MHB.do_angry_face();
  delay(1000);
  MHB.do_sad_face();
  delay(1000);
  MHB.do_crying_face();
  delay(1000);
  MHB.move_forward(4, 500);
  delay(1000);
  MHB.turn_left(2, 1000);
  delay(1000);
  MHB.turn_right(2, 1000);
  delay(1000);
  MHB.i_can_dance();
  delay(1000);
  MHB.subscribe_hash();
  delay(1000);
  MHB.say_thank_you();
  delay(2000);

  //MHB.say_no();
  //  delay(1000);
  //  MHB.hands_up();
  //  delay(1000);
  //  MHB.hands_down();
  //  delay(1000);
  //  MHB.hand_wave(3);
  //  delay(1000);
  //  MHB.right_leg_wave(2);
  //  delay(1000);
  //  MHB.left_leg_wave(2);
  //  delay(1000);
  //  MHB.leg_hand_shake(3);
  //  delay(1000);
  //  MHB.right_slide_wave(2);
  //  delay(1000);
  //  MHB.left_slide_wave(2);
  //  delay(1000);
  //  MHB.hand_straight_shake(3);
  //  delay(1000);
  //  MHB.move_forward(5, 500);
  //  delay(1000);
  //  MHB.move_backward(5, 1000);
  //  delay(1000);
  //  MHB.side_move_right(5);
  //  delay(1000);
  //  MHB.side_move_left(5);
  //  delay(1000);
  //  MHB.turn_left(5, 1000);
  //  delay(1000);
  //  MHB.turn_right(5, 1000);
  //  delay(1000);
  //  MHB.flying(3);
  //  delay(1000);
  //  MHB.leg_shake(2);
  //  delay(1000);
  //  MHB.flying_hand_wave(4);
  //  delay(1000);
  //  MHB.jump(4, 30);
  //  delay(1000);
  //  MHB.leg_head_shake(5);
  //  delay(1000);

}
