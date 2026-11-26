#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    // I want to initialize vector rounded_scores with same size and zero values, then fill it with rounded down scores
    std::vector<int> rounded_scores(student_scores.size(), 0);
    for (size_t i = 0; i < student_scores.size(); ++i) {
        rounded_scores[i] = static_cast<int>(student_scores[i]);
    }
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for (int score : student_scores) {
        if (score <= 40) {
            ++count;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int interval = (highest_score - 40) / 4;
    std::array<int, 4> grades;
    for (int i = 0; i < 4; ++i) {
        grades[i] = 41 + i * interval;
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking(student_scores.size());
    for (size_t i = 0; i < student_scores.size(); ++i) {
        ranking[i] = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (size_t i = 0; i < student_scores.size(); ++i) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}
