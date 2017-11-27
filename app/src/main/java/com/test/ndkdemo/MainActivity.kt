package com.test.ndkdemo

import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.view.View
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    private val myJNI = MyJNI()

    fun onclick(view: View) {
        when {
            view == string_btn -> show_result.text = myJNI.sayHello()
            view == sum_btn -> {

                val input1 = input_num1.text.toString().toInt()
                val input2 = input_num2.text.toString().toInt()

                show_result.text = myJNI.sum(input1, input2).toString()
            }
        }
    }
}
