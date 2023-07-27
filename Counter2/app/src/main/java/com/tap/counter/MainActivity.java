package com.tap.counter;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    int var = 0;
    @SuppressLint("SetTextI18n")
    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button button1 = (Button) findViewById(R.id.button2);
        Button button2 = (Button) findViewById(R.id.button3);
        TextView textView = (TextView) findViewById(R.id.textView1);

        textView.setText(Integer.toString(var));


        button1.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                var-=1;
                textView.setText(Integer.toString(var));
            }
        });
        button2.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                var+=1;
                textView.setText(Integer.toString(var));
            }
        });

    }
}