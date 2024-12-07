#ifndef ENC_H
#define ENC_H

namespace enc {

    template <typename T>
    class var {
    private:
        T encrypted;
        T key;
        static const int rounds = 10;

        T generateKey() {
            return static_cast<T>(std::rand() % 100 + 1);
        }

        T encrypt(T value) const {
            T result = value;
            for (int i = 0; i < rounds; ++i) {
                result += key;
                result *= 1.2;
            }
            return result;
        }

        T decrypt(T value) const {
            T result = value;
            for (int i = rounds - 1; i >= 0; --i) {
                result /= 1.2;
                result -= key;
            }
            return result;
        }

    public:
        var() {
            std::srand(static_cast<unsigned int>(std::time(nullptr)));
            key = generateKey();
        }

        void set(T value) {
            encrypted = encrypt(value);
        }

        T get() const {
            return decrypt(encrypted);
        }

        T getEncrypted() const {
            return encrypted;
        }
    };

}

#endif // ENC_H