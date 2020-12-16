#pragma once

namespace SnakeCpp {

	using namespace System;
    using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{

	private:
		int rI, rJ;
		PictureBox ^fruit;
		array<PictureBox^>^ snake = gcnew array<PictureBox^>(400);
		Label ^labelScore;

		int dirX, dirY;
		int _width = 900;
		int _height = 800;
		int _sizeOfSides = 40;

        int max_score = 0;

        int timer_period = 0;
        System::Windows::Forms::Label^ max_score_label;

		int score = 0;

	public:
		Form1(void)
		{
			InitializeComponent();
            

            try
            {
                StreamReader^ din = File::OpenText("config.txt");

                String^ str;
                if((str = din->ReadLine()) != nullptr)
                {
                    timer_period = Convert::ToInt32(str);
                }
                if ((str = din->ReadLine()) != nullptr)
                {
                    max_score = Convert::ToInt32(str);
                    max_score_label->Text = "Max score: " + str;
                }
                din->Close();
            }
            catch (Exception^ e)
            {
                if (dynamic_cast<FileNotFoundException^>(e))
                    Console::WriteLine("file not found");
                else
                    Console::WriteLine("problem reading file");
            }

			this->Text = "Snake";
			this->Width = _width;
			this->Height = _height;
			dirX = 1;
			dirY = 0;

            labelScore = gcnew System::Windows::Forms::Label();
            labelScore->Text = "Score: 0";
            labelScore->Location = Point(805, 10);
            this->Controls->Add(labelScore);

			snake[0] = gcnew PictureBox();
			snake[0]->Location = System::Drawing::Point(201, 201);
			snake[0]->Size = System::Drawing::Size(_sizeOfSides - 1, _sizeOfSides - 1);
			snake[0]->BackColor = Color::Blue;
			this->Controls->Add(snake[0]);
			fruit = gcnew PictureBox();
			fruit->BackColor = Color::Red;
			fruit->Size = System::Drawing::Size(_sizeOfSides, _sizeOfSides);
			_generateMap();
			_generateFruit();
			timer1->Interval = timer_period;
			timer1->Start();
		}

        void _generateFruit()
        {
            Random^ r = gcnew System::Random();
            rI = r->Next(0, _height - _sizeOfSides);
            int tempI = rI % _sizeOfSides;
            rI -= tempI;
            rJ = r->Next(0, _height - _sizeOfSides);
            int tempJ = rJ % _sizeOfSides;
            rJ -= tempJ;
            rI++;
            rJ++;
            fruit->Location = Point(rI, rJ);
            this->Controls->Add(fruit);
        }

        void _checkBorders()
        {
            if (snake[0]->Location.X < 0)
            {
                for (int _i = 1; _i <= score; _i++)
                {
                    this->Controls->Remove(snake[_i]);
                }
                score = 0;
                labelScore->Text = "Score: " + score;
                dirX = 1;
            }
            if (snake[0]->Location.X > _height)
            {
                for (int _i = 1; _i <= score; _i++)
                {
                    this->Controls->Remove(snake[_i]);
                }
                score = 0;
                labelScore->Text = "Score: " + score;
                dirX = -1;
            }
            if (snake[0]->Location.Y < 0)
            {
                for (int _i = 1; _i <= score; _i++)
                {
                    this->Controls->Remove(snake[_i]);
                }
                score = 0;
                labelScore->Text = "Score: " + score;
                dirY = 1;
            }
            if (snake[0]->Location.Y > _height)
            {
                for (int _i = 1; _i <= score; _i++)
                {
                    this->Controls->Remove(snake[_i]);
                }
                score = 0;
                labelScore->Text = "Score: " + score;
                dirY = -1;
            }
        }

        void _eatItself()
        {
            for (int _i = 1; _i < score; _i++)
            {
                if (snake[0]->Location == snake[_i]->Location)
                {
                    for (int _j = _i; _j <= score; _j++)
                        this->Controls->Remove(snake[_j]);
                    score = score - (score - _i + 1);
                    labelScore->Text = "Score: " + score;
                }
            }
        }

        void _eatFruit()
        {
            if (snake[0]->Location.X == rI && snake[0]->Location.Y == rJ)
            {
                labelScore->Text = "Score: " + ++score;
                if (score > max_score)
                {
                    max_score_label->Text = "Max score: " + score.ToString();
                    StreamWriter^ din = gcnew StreamWriter("config.txt", false);
                    din->WriteLine(timer_period.ToString());
                    din->WriteLine(score.ToString());
                    din->Flush();
                    din->Close();
                }
                snake[score] = gcnew PictureBox();
                snake[score]->Location = Point(snake[score - 1]->Location.X + 40 * dirX, snake[score - 1]->Location.Y - 40 * dirY);
                snake[score]->Size = System::Drawing::Size(_sizeOfSides - 1, _sizeOfSides - 1);
                snake[score]->BackColor = Color::Yellow;
                this->Controls->Add(snake[score]);
                _generateFruit();
            }
        }

        void _generateMap()
        {
            for (int i = 0; i < _width / _sizeOfSides; i++)
            {
                PictureBox ^pic = gcnew PictureBox();
                pic->BackColor = Color::Black;
                pic->Location = Point(0, _sizeOfSides * i);
                pic->Size = System::Drawing::Size(_width - 100, 1);
                this->Controls->Add(pic);
            }
            for (int i = 0; i <= _height / _sizeOfSides; i++)
            {
                PictureBox^ pic = gcnew PictureBox();
                pic->BackColor = Color::Black;
                pic->Location = Point(_sizeOfSides * i, 0);
                pic->Size = System::Drawing::Size(1, _width);
                this->Controls->Add(pic);
            }
        }

        void _eatFruit(int m)
        {
            for (int i = score; i >= 1; i--)
            {
                snake[i]->Location = snake[i - 1]->Location;
            }
            snake[0]->Location = Point(snake[0]->Location.X + dirX * (_sizeOfSides), snake[0]->Location.Y + dirY * (_sizeOfSides));
            _eatItself();
        }

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:


		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->max_score_label = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // timer1
            // 
            this->timer1->Tick += gcnew System::EventHandler(this, &Form1::_update);
            // 
            // max_score_label
            // 
            this->max_score_label->AutoSize = true;
            this->max_score_label->Location = System::Drawing::Point(1073, 49);
            this->max_score_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->max_score_label->Name = L"max_score_label";
            this->max_score_label->Size = System::Drawing::Size(46, 17);
            this->max_score_label->TabIndex = 0;
            this->max_score_label->Text = L"label1";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1655, 683);
            this->Controls->Add(this->max_score_label);
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private: System::Void _update(System::Object^ sender, System::EventArgs^ e) {
        _checkBorders();
        _eatFruit();
        _eatFruit(0);
    }

private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
    switch (e->KeyCode)
    {
    case Keys::Right:
        dirX = 1;
        dirY = 0;
        break;
    case  Keys::Left:
        dirX = -1;
        dirY = 0;
        break;
    case  Keys::Up:
        dirY = -1;
        dirX = 0;
        break;
    case  Keys::Down:
        dirY = 1;
        dirX = 0;
        break;
    }
}
};
}
