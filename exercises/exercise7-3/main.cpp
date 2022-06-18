/*
 * Усовершенствована функция showBinary(),
 * чтобы она показывала в значении
 * unsigned int все биты, а не только
 * правые восемь.
 *
 * (Доработанное exercise7-2).
 */
#include <iostream>
#include <cmath>
using namespace std;

/*
 * Раскомментировать в случае
 * вывода битов числа при помощи
 * библиотечной функции.
 * (void showBinary(unsigned int _symbol),
 * строки 259 - 260).
 *
 * #include <bitset>
 */

/*!
 * \brief Циклический сдвиг байта влево на n позиций.
 * \param _val - исходный символ.
 * \param _n - количество сдвигов.
 * \return Символ после сдвига.
 */
unsigned char rrotate(unsigned char _val, int _n);
/*!
 * \brief Циклический сдвиг байта вправо на n позиций.
 * \param _val - исходный символ.
 * \param _n - количество сдвигов.
 * \return Символ после сдвига.
 */
unsigned char lrotate(unsigned char _val, unsigned int _n);

/*!
 * \brief Вывод на экран битов символа.
 * \param _symbol - символ.
 */
void showBinary(unsigned int _symbol);
/*!
 * \brief Вывод на экран битов массива символов.
 * \param _str - массив символов.
 */
void showBinarySymbols(char _str[]);

/*!
 * \brief Возвращает корректное целочисленное
 * значение введенного символа в указанном диапазоне.
 * \param _minValue - минимальное значение.
 * \param _maxValue - максимвльное значение.
 * \return Целочисленное значение введенного символа.
 */
int inputValue(char _minValue, char _maxValue);

/*!
 * \brief Устанавливает ключ.
 * \param _message - сообщение.
 * \param _key - указатель на ключ.
 */
void setKey(char *_message, char *_key);
/*!
 * \brief Возвращает количество символов массива.
 * \param _message - массив символов.
 * \return Количество символов.
 */
int symbolCount(char _message[]);

/*!
 * \brief Зашифровка сообщения.
 * \param _message - сообщение.
 * \param _key - ключ.
 */
void messageDecryption(char *_message, char *_key);
/*!
 * \brief Зашифровка сообщения.
 * \param _message - сообщение.
 * \param _key - количество битов для сдвига..
 */
void messageDecryption(char *_message, int _key);
/*!
 * \brief Показать зашифрованное сообщение.
 * \param _message - сообщение.
 */
void showDecryptedMessage(char _message[]);

/*!
 * \brief Расшифровка сообщения.
 * \param _message - сообщение.
 * \param _key - ключ.
 */
void messageEncryption(char *_message, char *_key);
/*!
 * \brief Расшифровка сообщения.
 * \param _message - сообщение.
 * \param _key - количество битов для сдвига.
 */
void messageEncryption(char *_message, int _key);
/*!
 * \brief Показать расшифрованное сообщение.
 * \param _message - сообщение.
 */
void showEncryptedMessage(char _message[]);

int main()
{
    char message[80];

    cout << "Введите строку: ";

    gets(message);

    cout << "Исходная строка: " << message << '\n';
    cout << "Значения символов исходной строки в двоичном коде: " << '\n';

    showBinarySymbols(message);

    cout << "\nВыберите способ шифрования: \n";
    cout << "1 Циклический сдвиг каждого символа влево"
            ", на фиксированное число битов.\n";
    cout << "2 Циклический сдвиг каждого символа влево,"
            " на число битов задаваемое ключом.\n";

    int change = inputValue('1', '2');

    if (change == 1)
    {
        cout << "Введите количество битов на которое"
                " нужно сдвинуть влево каждый символ:\n";

        int byteCount = inputValue('1', '8');

        messageEncryption(message, byteCount);

        cout << "1 Автоматический. Циклический сдвиг каждого символа обратно"
                " вправо, на " << byteCount << " битов.\n";
        cout << "2 Ручной. Циклический сдвиг каждого символа вправо"
                ", на фиксированное число битов.\n";

        change = inputValue('1', '2');

        if (change == 2)
        {
            cout << "Введите количество битов на которое"
                    " нужно сдвинуть вправо каждый символ:\n";

            byteCount = inputValue('1', '8');
        }
        messageDecryption(message, byteCount);
    }
    else if (change == 2)
    {
        cout << "\n\nСмещение каждого символа исходного сообщения влево"
                " на количество бит равняющегося значению"
                " соответствующего символа ключа.";

        char key[80];

        setKey(message, key);

        messageEncryption(message, key);

        cout << "1 Автоматический. Циклический сдвиг каждого символа обратно"
                " вправо, на количество бит равняющегося значению"
                " соответствующего символа ключа.\n";

        cout << "2 Автоматический. Циклический сдвиг каждого символа обратно"
                " вправо, на количество бит равняющегося значению"
                " соответствующего символа введенного ключа.\n";

        change = inputValue('1', '2');

        if (change == 1)
        {
            messageDecryption(message, key);
        }
        else if (change == 2)
        {
            setKey(message, key);

            messageDecryption(message, key);
        }
    }
    return 0;
}

unsigned char lrotate(unsigned char _val, unsigned int _n)
{
    unsigned int t;

    t = _val;

    for (unsigned int i = 0; i < _n; i ++)
    {
        t = t << 1;

        /*
         * Если бит выдвигается из байта,
         * это будет бит 8 целого числа t.
         * В этом случае поместим этот бит
         * с правой сторогы t.
         */
        if (t & 256)
            /*
             * Поместим 1 в самый правый бит.
             */
            t = t | 1;
    }

    /*
     * Вернем младшие 8 бит.
     */
    return t;
}

unsigned char rrotate(unsigned char _val, int _n)
{
    unsigned int t;

    t = _val;

    /*
     * Сначала сдвинем значение на 8 бит влево.
     */
    t = t << 8;

    for (int i = 0; i < _n; i ++)
    {
        t = t >> 1;

        /*
         * Если бит выдвигается из байта, это будет
         * бит 7 целого числа t. В этом случае
         * поместим этот бит с левой стороны t.
         */
        if (t & 128)
            /*
             * Поместим 1 в самый левый бит.
             */
            t = t | 32768;
    }

    /*
     * Наконец сдвинем результат
     * назад в младшие 8 бит t.
     */
    t = t >> 8;

    return t;
}

void showBinary(unsigned int _symbol)
{
    /*
     * Аналогичный способ вывода битов числа
     * с помощью функции библиотеки <bitset>.
     *
     * bitset<sizeof(_symbol) * 8> number(_symbol);
     * cout << number << '\n';
     */

    unsigned int k = pow(2, sizeof(_symbol) * 8 - 1);

    unsigned int t;

    for (t = k; t > 0; t = t / 2)
        if (_symbol & t) cout << "1 ";
        else cout << "0 ";

    cout << "\n";
}

void showBinarySymbols(char _str[])
{
    for (int i = 0; _str[i]; i ++)
    {
        cout << "\nsymbol " << i << " = " << _str[i] << '\n';
        showBinary(_str[i]);
    }
}

int inputValue(char _minValue, char _maxValue)
{
    char symbol = 0;
    char symbolArray[80];

    while (symbol < _minValue ||
           symbol > _maxValue)
    {
        cout << "Введите значение от "
             << _minValue <<" до "
             << _maxValue << ": ";
        cin >>symbolArray;

        if (symbolCount(symbolArray) == 1)
        {
            symbol = symbolArray[0];
        }
    }
    return (int)symbol - '0';
}

void setKey(char *_message, char *_key)
{
    //char* key =  new char[80];

    cout << "\nВведите ключ: ";
    cin >> _key;

    cout << "\nЗначения символов ключа: ";

    for (int i = 0; _key[i]; i ++)
    {
        cout << "\nsymbol " << i << " = " << _key[i] << " = " << (int)_key[i];
    }

    for (int i = 0; i < 80; i ++)
    {
        if ((int)_message[i] == 0)
        {
            _key[i] = 0;
            break;
        }

        int keyIndex = 0;

        /*
         * Если ключ короче слова, то ключ
         * повторяется несколько раз.
         */
        if (int(_key[keyIndex]) == 0)
        {
            keyIndex = 0;
        }
        _key[i] = _key[keyIndex];
    }
}

int symbolCount(char _message[])
{
    int symbolCount = 0;
    for (int i = 0; _message[i]; i ++)
    {
        symbolCount ++;
    }
    return symbolCount;
}

void messageDecryption(char *_message, char *_key)
{
    for (int i = symbolCount(_message) - 1; i >= 0; i --)
    {
        _message[i] = rrotate(_message[i], _key[i]);
    }
    showDecryptedMessage(_message);
}

void messageDecryption(char *_message, int _key)
{
    for (int i = 0; _message[i]; i ++)
    {
        _message[i] = rrotate(_message[i], _key);
    }
    showDecryptedMessage(_message);
}

void showDecryptedMessage(char _message[])
{
    cout << "\nРасшифрованная строка: " << _message << '\n';
    cout << "Значения символов расшифрованной строки в двоичном коде: " << '\n';

    showBinarySymbols(_message);
}

void messageEncryption(char *_message, char *_key)
{
    for (int i = 0; _message[i]; i ++)
    {
        _message[i] = lrotate(_message[i], _key[i]);
    }
    showEncryptedMessage(_message);
}
void messageEncryption(char *_message, int _key)
{
    for (int i = 0; _message[i]; i ++)
    {
        _message[i] = lrotate(_message[i], _key);
    }
    showEncryptedMessage(_message);
}

void showEncryptedMessage(char _message[])
{
    cout << "\nЗашифрованная строка: " << _message << '\n';
    cout << "Значения символов зашифрованной строки в двоичном коде: " << '\n';

    showBinarySymbols(_message);
    cout << "\nВыберите способ расшифровки:\n";
}
