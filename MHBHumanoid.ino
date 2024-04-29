
#include "MiniHashHumanoid.h"

MiniHashHumanoid minihash;

void setup() {

  Serial.begin(115200);
  Serial.println("GPIO test!");
  delay(2000);
  minihash.init_hash();
  minihash.initial_position();
  delay(2000);
}

void loop() {

  minihash.bink_eye(2);
  delay(1000);
  minihash.say_hi(2);
  delay(1000);
  minihash.my_name_hash_jr();
  delay(1000);
  minihash.say_yes();
  minihash.i_am_mini_robot();
  delay(1000);
  minihash.controlled_by_esp32();
  delay(1000);
  minihash.i_can_do_facial_exp();
  delay(1000);
  minihash.do_happy_face();
  delay(1000);
  minihash.do_angry_face();
  delay(1000);
  minihash.do_sad_face();
  delay(1000);
  minihash.do_crying_face();
  delay(1000);
  minihash.move_forward(4, 500);
  delay(1000);
  minihash.turn_left(2, 1000);
  delay(1000);
  minihash.turn_right(2, 1000);
  delay(1000);
  minihash.i_can_dance();
  delay(1000);
  minihash.subscribe_hash();
  delay(1000);
  minihash.say_thank_you();
  delay(2000);

  //minihash.say_no();
  //  delay(1000);
  //  minihash.hands_up();
  //  delay(1000);
  //  minihash.hands_down();
  //  delay(1000);
  //  minihash.hand_wave(3);
  //  delay(1000);
  //  minihash.right_leg_wave(2);
  //  delay(1000);
  //  minihash.left_leg_wave(2);
  //  delay(1000);
  //  minihash.leg_hand_shake(3);
  //  delay(1000);
  //  minihash.right_slide_wave(2);
  //  delay(1000);
  //  minihash.left_slide_wave(2);
  //  delay(1000);
  //  minihash.hand_straight_shake(3);
  //  delay(1000);
  //  minihash.move_forward(5, 500);
  //  delay(1000);
  //  minihash.move_backward(5, 1000);
  //  delay(1000);
  //  minihash.side_move_right(5);
  //  delay(1000);
  //  minihash.side_move_left(5);
  //  delay(1000);
  //  minihash.turn_left(5, 1000);
  //  delay(1000);
  //  minihash.turn_right(5, 1000);
  //  delay(1000);
  //  minihash.flying(3);
  //  delay(1000);
  //  minihash.leg_shake(2);
  //  delay(1000);
  //  minihash.flying_hand_wave(4);
  //  delay(1000);
  //  minihash.jump(4, 30);
  //  delay(1000);
  //  minihash.leg_head_shake(5);
  //  delay(1000);

}
